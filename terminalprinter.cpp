#include "terminalprinter.h"
#include <QTextCursor>
#include <QRegularExpression>

// --- конструктор / деструктор ---

TerminalPrinter::TerminalPrinter(QTextEdit* out, QObject* parent)
    : QObject(parent), terminal(out), charPrintTimer(new QTimer(this)) {
    if (terminal) terminal->setAcceptRichText(true);
    charPrintTimer->setInterval(20);
    connect(charPrintTimer, &QTimer::timeout, this, &TerminalPrinter::printNextChunk);
}

TerminalPrinter::~TerminalPrinter() {
    if (charPrintTimer->isActive()) charPrintTimer->stop();
}

// --- режим / активность ---

void TerminalPrinter::setMode(Mode m) { currentMode = m; }

void TerminalPrinter::setActive(bool a) {
    terminalActive = a;
    if (!a && charPrintTimer->isActive()) charPrintTimer->stop();
}

// --- эвристики для HTML ---

static QRegularExpression reRealTag("<\\s*\\w+[^>]*>");
static QRegularExpression reEscTag("&lt;\\s*\\w+[^&]*&gt;");
static QRegularExpression reBareSpan("(^|\\s)span\\s+style\\s*=\\s*['\"][^'\"]+['\"][^>]*>");

bool TerminalPrinter::hasRealHtml(const QString& s)      { return reRealTag.match(s).hasMatch(); }
bool TerminalPrinter::hasEscapedHtml(const QString& s)   { return reEscTag.match(s).hasMatch(); }
bool TerminalPrinter::looksLikeBareSpan(const QString& s){ return reBareSpan.match(s).hasMatch(); }

QString TerminalPrinter::unescapeBasicEntities(const QString& s) {
    return QString(s).replace("&lt;","<").replace("&gt;",">").replace("&amp;","&");
}

QString TerminalPrinter::ensureAngleBrackets(const QString& s) {
    // если строка содержит "span ..." без угловых скобок — аккуратно обернём
    QString t = s;
    int pos = t.indexOf("span ");
    if (pos >= 0 && (pos == 0 || t[pos-1].isSpace())) {
        t.insert(pos, "<");
        int gtPos = t.indexOf('>', pos);
        if (gtPos < 0) {
            int after = t.indexOf(')', pos);
            int endAttr = qMax(t.indexOf(' ', pos+1), after);
            if (endAttr > 0) t.insert(endAttr, ">");
            else t.append(">");
        }
    }
    return t;
}

QString TerminalPrinter::sanitizeHtml(const QString& s) {
    QString t = s;
    t.remove(QRegularExpression("<\\s*script[^>]*>.*?<\\s*/\\s*script\\s*>",
                                QRegularExpression::DotMatchesEverythingOption | QRegularExpression::CaseInsensitiveOption));
    t.remove(QRegularExpression("<\\s*style[^>]*>.*?<\\s*/\\s*style\\s*>",
                                QRegularExpression::DotMatchesEverythingOption | QRegularExpression::CaseInsensitiveOption));
    return t;
}

// --- публичный вывод ---

void TerminalPrinter::print(const QString& message) {
    if (!terminal || !terminalActive) return;
    endTypingLine();

    QString prepared;
    if (hasRealHtml(message)) {
        prepared = sanitizeHtml(message);
    } else if (hasEscapedHtml(message)) {
        prepared = sanitizeHtml(unescapeBasicEntities(message));
    } else if (looksLikeBareSpan(message)) {
        prepared = sanitizeHtml(ensureAngleBrackets(message));
    } else {
        prepared = message.toHtmlEscaped();
    }

    if (currentMode == Mode::Log) {
        printImmediatePreparedHtml(prepared, /*rawHtml*/false);
    } else {
        startTypingPreparedHtml(prepared, /*rawHtml*/false);
    }
}

void TerminalPrinter::printHtml(const QString& html) {
    if (!terminal || !terminalActive) return;
    endTypingLine();

    const QString prepared = sanitizeHtml(html);
    if (currentMode == Mode::Log) {
        printImmediatePreparedHtml(prepared, /*rawHtml*/true);
    } else {
        startTypingPreparedHtml(prepared, /*rawHtml*/true);
    }
}

// --- внутренняя логика печати ---

void TerminalPrinter::endTypingLine() {
    if (!typing) return;
    charPrintTimer->stop();
    QTextCursor c = terminal->textCursor();
    c.movePosition(QTextCursor::End);
    terminal->setTextCursor(c);
    if (!pendingIsRawHtml) terminal->insertHtml(styleCloseTag());
    terminal->insertHtml("<br/>");
    typing = false;
    pending.clear();
    currentIndex = 0;
}

void TerminalPrinter::printImmediatePreparedHtml(const QString& preparedHtml, bool rawHtml) {
    QTextCursor c = terminal->textCursor();
    c.movePosition(QTextCursor::End);
    terminal->setTextCursor(c);

    if (!rawHtml) terminal->insertHtml(styleOpenTag());
    terminal->insertHtml(preparedHtml);
    if (!rawHtml) terminal->insertHtml(styleCloseTag());
    terminal->insertHtml("<br/>");
    terminal->ensureCursorVisible();
}

void TerminalPrinter::startTypingPreparedHtml(const QString& preparedHtml, bool rawHtml) {
    pending = preparedHtml;
    currentIndex = 0;
    typing = true;
    pendingIsRawHtml = rawHtml;

    QTextCursor c = terminal->textCursor();
    c.movePosition(QTextCursor::End);
    terminal->setTextCursor(c);
    if (!rawHtml) terminal->insertHtml(styleOpenTag());
    terminal->ensureCursorVisible();

    charPrintTimer->start();
}

// --- токенизация потока для тайпинга ---

QString TerminalPrinter::nextChunk() {
    if (currentIndex >= pending.size()) return QString();

    const QChar ch = pending.at(currentIndex);

    // 1) HTML-тег "<...>" — вернуть целиком
    if (ch == '<') {
        int end = pending.indexOf('>', currentIndex + 1);
        if (end == -1) {
            // нет '>' — экранировать остаток как текст
            QString rest = pending.mid(currentIndex).toHtmlEscaped();
            currentIndex = pending.size();
            return rest;
        }
        QString tag = pending.mid(currentIndex, end - currentIndex + 1);
        currentIndex = end + 1;
        return tag;
    }

    // 2) HTML-сущность "&...;"
    if (ch == '&') {
        int end = pending.indexOf(';', currentIndex + 1);
        if (end != -1) {
            QString ent = pending.mid(currentIndex, end - currentIndex + 1);
            currentIndex = end + 1;
            return ent;
        }
        // если ';' не нашли — безопасный амперсанд
        currentIndex++;
        return "&amp;";
    }

    // 3) перевод строки
    if (ch == '\n') {
        currentIndex++;
        return "<br/>";
    }

    // 4) пробел — как неразрывный
    if (ch == ' ') {
        currentIndex++;
        return "&nbsp;";
    }

    // 5) обычный символ
    currentIndex++;
    return QString(ch);
}

void TerminalPrinter::printNextChunk() {
    if (!terminal || !terminalActive) { charPrintTimer->stop(); typing = false; return; }

    if (currentIndex >= pending.size()) {
        QTextCursor c = terminal->textCursor();
        c.movePosition(QTextCursor::End);
        terminal->setTextCursor(c);
        if (!pendingIsRawHtml) terminal->insertHtml(styleCloseTag());
        terminal->insertHtml("<br/>");
        terminal->ensureCursorVisible();
        charPrintTimer->stop();
        typing = false;
        pending.clear();
        currentIndex = 0;
        return;
    }

    const QString chunk = nextChunk();
    QTextCursor c = terminal->textCursor();
    c.movePosition(QTextCursor::End);
    terminal->setTextCursor(c);
    terminal->insertHtml(chunk);
    terminal->ensureCursorVisible();
}

// --- стили режимов ---

QString TerminalPrinter::styleOpenTag() const {
    switch (currentMode) {
    case Mode::Log:       return "<span style=\"color:#7f7f7f;\">";
    case Mode::Journal:   return "<span style=\"color:#bfa75a;\">";
    case Mode::Narrative: return "<span style=\"color:#df4c2e;\"><b>";
    }
    return "<span>";
}

QString TerminalPrinter::styleCloseTag() const {
    switch (currentMode) {
    case Mode::Narrative: return "</b></span>";
    default:              return "</span>";
    }
}
