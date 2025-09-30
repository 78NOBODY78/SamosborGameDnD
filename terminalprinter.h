#ifndef TERMINALPRINTER_H
#define TERMINALPRINTER_H

#include <QObject>
#include <QTextEdit>
#include <QTimer>

class TerminalPrinter : public QObject {
    Q_OBJECT
public:
    enum class Mode { Log, Journal, Narrative };

    explicit TerminalPrinter(QTextEdit* terminalOutput, QObject* parent = nullptr);
    ~TerminalPrinter();

    void setMode(Mode mode);
    void setActive(bool active);

    // 1) безопасный вывод (подозрительный HTML экранируется)
    void print(const QString& message);

    // 2) доверенный HTML — рендерим «как есть» (с лёгкой санацией)
    void printHtml(const QString& html);

private slots:
    void printNextChunk();

private:
    QTextEdit* terminal = nullptr;
    Mode currentMode = Mode::Log;
    bool terminalActive = true;

    QTimer* charPrintTimer = nullptr;
    QString pending;          // буфер уже подготовленного HTML (готов к insertHtml)
    int currentIndex = 0;
    bool typing = false;
    bool pendingIsRawHtml = false; // для printHtml (не оборачивать стилем режима)

    // helpers
    void endTypingLine();
    void startTypingPreparedHtml(const QString& preparedHtml, bool rawHtml);
    void printImmediatePreparedHtml(const QString& preparedHtml, bool rawHtml);
    QString styleOpenTag() const;
    QString styleCloseTag() const;
    QString nextChunk();      // возвращает следующий «кусочек»: <tag>, &nbsp;, <br/>, символ

    // нормализация входа
    static bool hasRealHtml(const QString& s);            // <tag ...>
    static bool hasEscapedHtml(const QString& s);         // &lt;tag ...&gt;
    static bool looksLikeBareSpan(const QString& s);      // "span style=..."
    static QString unescapeBasicEntities(const QString& s); // &lt; &gt; &amp; -> < > &
    static QString ensureAngleBrackets(const QString& s);   // span ... -> <span ...>
    static QString sanitizeHtml(const QString& s);        // вырезаем <script>/<style>
};

#endif // TERMINALPRINTER_H
