#include "talenttreewidget.h"
#include "ui_talenttreewidget.h"
#include "style.h"

#include <QDir>
#include <QFileInfo>
#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QMessageBox>
#include <QInputDialog>
#include <QPushButton>
#include <QGroupBox>
#include <QStyle>
#include <QDebug>
#include <QScreen>

TalentTreeWidget::TalentTreeWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::TalentTreeWidget)
    , logic(new TalentLogic(this))
{
    ui->setupUi(this);

    // Настройки появления окна
    raise(); // Показываем окно поверх остальных всех
    setWindowFlags(windowFlags() | Qt::WindowStaysOnTopHint | Qt::WindowTitleHint);// Убираем богомерзкие кнопки сверху (дешевку (бедность))
    //Ставим эту скотину в центр экрана
    QScreen *screen = QApplication::primaryScreen(); //обзываем
    QRect screenGeometry = screen->availableGeometry(); // продолжаем булинг
    int x = (screenGeometry.width() - width()) / 2; // опа, а вот и настройка позиции по Х (Хореография)
    int y = (screenGeometry.height() - height()) / 2; // по У (Устал)
    move(x, y); // все двигаем, только не значение регистра У в регистр Х а по лдмки, нормально двигаем
    // теперь просто надо ВСТАВИТЬ (это вдругие окна, чтоб все по человечески открывалось а не где то под Чукоткой)

    // --- Сопоставим кнопки из UI ---
    tier1Buttons = {
                    { ui->pushButtonTalent1, ui->pushButtonTalent1Help, QString() },
                    { ui->pushButtonTalent2, ui->pushButtonTalent2Help, QString() },
                    { ui->pushButtonTalent3, ui->pushButtonTalent3Help, QString() },
                    };
    tier2Buttons = {
                    { ui->pushButtonTalent4, ui->pushButtonTalent4Help, QString() },
                    { ui->pushButtonTalent5, ui->pushButtonTalent5Help, QString() },
                    { ui->pushButtonTalent6, ui->pushButtonTalent6Help, QString() },
                    };

    specGroups.resize(3);
    // group 1
    specGroups[0].box = ui->groupBoxSpecial1;
    specGroups[0].levelBtns = {
                               { ui->pushButtonSpecial1_1, ui->pushButtonSpecial1Help_1, QString() },
                               { ui->pushButtonSpecial1_2, ui->pushButtonSpecial1Help_2, QString() },
                               { ui->pushButtonSpecial1_3, ui->pushButtonSpecialt1Help_3, QString() },
                               };
    // group 2
    specGroups[1].box = ui->groupBoxSpecial2;
    specGroups[1].levelBtns = {
                               { ui->pushButtonSpecial2_1, ui->pushButtonSpecialt2Help_1, QString() },
                               { ui->pushButtonSpecial2_2, ui->pushButtonSpecial2Help_2, QString() },
                               { ui->pushButtonSpecial2_3, ui->pushButtonSpecial2Help_3, QString() },
                               };
    // group 3
    specGroups[2].box = ui->groupBoxSpecial3;
    specGroups[2].levelBtns = {
                               { ui->pushButtonSpecial3_1, ui->pushButtonSpecial3Help_1, QString() },
                               { ui->pushButtonSpecial3_2, ui->pushButtonSpecial3Help_2, QString() },
                               { ui->pushButtonSpecial3_3, ui->pushButtonSpecial3Help_3, QString() },
                               };

    // Сделаем кнопки «переключателями», чтобы видно было, что талант взят
    for (auto &bm : tier1Buttons) bm.btn->setCheckable(true);
    for (auto &bm : tier2Buttons) bm.btn->setCheckable(true);
    for (auto &g : specGroups)
        for (auto &bm : g.levelBtns) bm.btn->setCheckable(true);

    setupConnections();
    populateCharacterList();

    // Инициализация заглушек
    ui->labelPrinClass->setText("-");
    ui->labelPrintLvL->setText("-");
    ui->labelPrintPoints->setText("-");
    setDirty(false);
}

TalentTreeWidget::~TalentTreeWidget()
{
    delete ui;
}

// -------------------- Подключения --------------------

void TalentTreeWidget::setupConnections()
{
    connect(ui->SelectCharactercomboBox, SIGNAL(currentIndexChanged(int)),
            this, SLOT(onCharacterChanged(int)));

    for (auto &bm : tier1Buttons) {
        connect(bm.btn,  &QPushButton::clicked, this, &TalentTreeWidget::onTierTalentClicked);
        connect(bm.help, &QPushButton::clicked, this, &TalentTreeWidget::onTierHelpClicked);
    }
    for (auto &bm : tier2Buttons) {
        connect(bm.btn,  &QPushButton::clicked, this, &TalentTreeWidget::onTierTalentClicked);
        connect(bm.help, &QPushButton::clicked, this, &TalentTreeWidget::onTierHelpClicked);
    }

    for (auto &g : specGroups)
        for (auto &bm : g.levelBtns) {
            connect(bm.btn,  &QPushButton::clicked, this, &TalentTreeWidget::onSpecTalentClicked);
            connect(bm.help, &QPushButton::clicked, this, &TalentTreeWidget::onSpecHelpClicked);
        }

    connect(ui->pushButtonSave,         &QPushButton::clicked, this, &TalentTreeWidget::onSaveClicked);
    connect(ui->pushButtonResetTalents, &QPushButton::clicked, this, &TalentTreeWidget::onResetClicked);
    connect(ui->pushButtonBack,         &QPushButton::clicked, this, &TalentTreeWidget::onBackClicked);
}

// -------------------- Данные персонажей --------------------

void TalentTreeWidget::populateCharacterList()
{
    ui->SelectCharactercomboBox->clear();

    QDir dir("data/characters");
    if (!dir.exists()) dir.mkpath("data/characters");
    const auto files = dir.entryInfoList(QStringList() << "*.json", QDir::Files, QDir::Name);
    for (const QFileInfo &fi : files)
        ui->SelectCharactercomboBox->addItem(fi.baseName(), fi.absoluteFilePath());

    if (ui->SelectCharactercomboBox->count() > 0)
        onCharacterChanged(0);
}

QString TalentTreeWidget::characterFilePath(const QString& name) const
{
    return QString("data/characters/%1.json").arg(name);
}

bool TalentTreeWidget::loadCharacter(const QString& name)
{
    currentCharName = name;
    QFile f(characterFilePath(name));
    if (!f.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("Ошибка"), tr("Не удалось открыть файл персонажа: %1").arg(f.fileName()));
        return false;
    }
    const auto doc = QJsonDocument::fromJson(f.readAll());
    if (!doc.isObject()) {
        QMessageBox::warning(this, tr("Ошибка"), tr("Некорректный JSON персонажа: %1").arg(f.fileName()));
        return false;
    }
    const QJsonObject o = doc.object();

    currentCharClass = o.value("class").toString();
    if (currentCharClass.isEmpty())
        currentCharClass = o.value(QString::fromUtf8("Класс")).toString();
    if (currentCharClass.isEmpty()) {
        ui->labelPrinClass->setText(tr("<не указан>"));
        QMessageBox::warning(this, tr("Ошибка"), tr("В персонаже не указан класс."));
        return false;
    }

    currentCharLevel = o.value("level").toInt();
    if (!o.contains("level"))
        currentCharLevel = o.value(QString::fromUtf8("Уровень")).toInt(1);
    if (currentCharLevel <= 0) currentCharLevel = 1;

    return true;
}

bool TalentTreeWidget::loadTalentsForClass(const QString& className)
{
    const QString jsonPath = TalentLogic::defaultJsonPathForClass(className);
    if (jsonPath.isEmpty()) {
        QMessageBox::warning(this, tr("Ошибка"), tr("Нет файла талантов для класса: %1").arg(className));
        return false;
    }
    if (!logic->loadFromFile(jsonPath)) {
        QMessageBox::warning(this, tr("Ошибка"), tr("Не удалось загрузить таланты класса: %1").arg(className));
        return false;
    }
    return true;
}

void TalentTreeWidget::onCharacterChanged(int index)
{
    if (!askDiscardIfDirty()) {
        disconnect(ui->SelectCharactercomboBox, SIGNAL(currentIndexChanged(int)),
                   this, SLOT(onCharacterChanged(int)));
        ui->SelectCharactercomboBox->setCurrentIndex(index > 0 ? index - 1 : 0);
        connect(ui->SelectCharactercomboBox, SIGNAL(currentIndexChanged(int)),
                this, SLOT(onCharacterChanged(int)));
        return;
    }

    selectedIds.clear();
    lockedSpecKey.clear();
    setDirty(false);

    const QString name = ui->SelectCharactercomboBox->itemText(index);
    if (!loadCharacter(name)) {
        ui->labelPrinClass->setText("-");
        ui->labelPrintLvL->setText("-");
        ui->labelPrintPoints->setText("-");
        for (auto &bm : tier1Buttons) { bm.btn->setText("-"); bm.btn->setEnabled(false); bm.help->setEnabled(false); }
        for (auto &bm : tier2Buttons) { bm.btn->setText("-"); bm.btn->setEnabled(false); bm.help->setEnabled(false); }
        for (auto &g : specGroups) {
            g.box->setTitle("-");
            for (auto &bm : g.levelBtns) { bm.btn->setText("-"); bm.btn->setEnabled(false); bm.help->setEnabled(false); }
            g.box->setEnabled(false);
            g.specKey.clear();
        }
        return;
    }

    // уже знаем класс и уровень — сразу обновим шапку
    refreshHeader();

    if (!loadTalentsForClass(currentCharClass)) {
        // дерево отключим, но шапка уже показана
        for (auto &bm : tier1Buttons) { bm.btn->setText("-"); bm.btn->setEnabled(false); bm.help->setEnabled(false); }
        for (auto &bm : tier2Buttons) { bm.btn->setText("-"); bm.btn->setEnabled(false); bm.help->setEnabled(false); }
        for (auto &g : specGroups) {
            g.box->setTitle("-");
            for (auto &bm : g.levelBtns) { bm.btn->setText("-"); bm.btn->setEnabled(false); bm.help->setEnabled(false); }
            g.box->setEnabled(false);
            g.specKey.clear();
        }
        return;
    }

    refreshAll();
}

// -------------------- Обновление UI --------------------

void TalentTreeWidget::refreshHeader()
{
    ui->labelPrinClass->setText(currentCharClass);
    ui->labelPrintLvL->setText(QString::number(currentCharLevel));
    ui->labelPrintPoints->setText("-");
}

void TalentTreeWidget::refreshAll()
{
    refreshHeader();
    refreshTiers();
    refreshSpecializations();
    updateTierButtonsEnabled();
    updateSpecGroupsEnabled();
    updateTierButtonsVisual();
    updateSpecButtonsVisual();
}

void TalentTreeWidget::fillTierButtons(const QVector<TalentLogic::Talent>& talents,
                                       QVector<ButtonMap>& buttons)
{
    for (int i = 0; i < buttons.size(); ++i) {
        if (i < talents.size()) {
            buttons[i].talentId = talents[i].id;
            buttons[i].btn->setText(talents[i].name);
            buttons[i].btn->setEnabled(true);
            buttons[i].help->setEnabled(true);
        } else {
            buttons[i].talentId.clear();
            buttons[i].btn->setText("-");
            buttons[i].btn->setEnabled(false);
            buttons[i].help->setEnabled(false);
        }
    }
}

void TalentTreeWidget::refreshTiers()
{
    const auto tier1 = logic->getTierTalents(1);
    const auto tier2 = logic->getTierTalents(2);

    fillTierButtons(tier1, tier1Buttons);
    fillTierButtons(tier2, tier2Buttons);
}

static QString labelForSpecLevel(const TalentLogic::SpecLevel& L,
                                 const QSet<QString>& selectedIds)
{
    if (!L.choices.isEmpty()) {
        for (const auto& ch : L.choices)
            if (selectedIds.contains(ch.id)) return ch.name;
        return QObject::tr("Выбрать вариант…");
    }
    return L.name.isEmpty() ? "-" : L.name;
}

void TalentTreeWidget::refreshSpecializations()
{
    const auto keys = logic->getSpecializationKeys();
    for (int i = 0; i < specGroups.size(); ++i) {
        if (i < keys.size()) {
            specGroups[i].specKey = keys[i];
            specGroups[i].box->setTitle(logic->getSpecializationName(keys[i]));
            specGroups[i].box->setEnabled(true);

            const auto* sp = logic->getSpecialization(keys[i]);
            for (int j = 0; j < specGroups[i].levelBtns.size(); ++j) {
                auto &bm = specGroups[i].levelBtns[j];
                bm.talentId.clear();

                if (sp && j < sp->levels.size()) {
                    const auto &L = sp->levels[j];
                    bm.btn->setText(labelForSpecLevel(L, selectedIds));
                    if (L.choices.isEmpty()) bm.talentId = L.id;
                    bm.btn->setEnabled(true);
                    bm.help->setEnabled(true);
                } else {
                    bm.btn->setText("-");
                    bm.btn->setEnabled(false);
                    bm.help->setEnabled(false);
                }
            }
        } else {
            specGroups[i].specKey.clear();
            specGroups[i].box->setTitle("-");
            specGroups[i].box->setEnabled(false);
            for (auto &bm : specGroups[i].levelBtns) {
                bm.talentId.clear();
                bm.btn->setText("-");
                bm.btn->setEnabled(false);
                bm.help->setEnabled(false);
            }
        }
    }
}

// --- визуальные состояния ---

void TalentTreeWidget::updateTierButtonsEnabled()
{
    for (auto &bm : tier1Buttons)
        if (!bm.talentId.isEmpty()) bm.btn->setEnabled(true);

    const bool allowT2 = canTakeTierTalent(2);
    for (auto &bm : tier2Buttons)
        if (!bm.talentId.isEmpty()) bm.btn->setEnabled(allowT2);
}

void TalentTreeWidget::updateSpecGroupsEnabled()
{
    const bool unlockAll = lockedSpecKey.isEmpty();
    for (auto &g : specGroups) {
        const bool enable = unlockAll || (g.specKey == lockedSpecKey);
        g.box->setEnabled(enable);
        // принудительно пробросим состояние на кнопки (иногда QGroupBox не перекидывает сразу)
        for (auto &bm : g.levelBtns) {
            bm.btn->setEnabled(enable && !bm.btn->text().isEmpty() && bm.btn->text() != "-");
            bm.help->setEnabled(enable && bm.btn->isEnabled());
        }
    }
}

void TalentTreeWidget::updateTierButtonsVisual()
{
    auto mark = [&](QVector<ButtonMap>& v){
        for (auto &bm : v) {
            const bool taken = !bm.talentId.isEmpty() && selectedIds.contains(bm.talentId);
            bm.btn->setChecked(taken);
            bm.btn->setProperty("taken", taken);
            bm.btn->style()->unpolish(bm.btn);
            bm.btn->style()->polish(bm.btn);
        }
    };
    mark(tier1Buttons);
    mark(tier2Buttons);
}

QString TalentTreeWidget::chosenChoiceName(const TalentLogic::SpecLevel& L) const
{
    if (L.choices.isEmpty()) return {};
    for (const auto& ch : L.choices)
        if (selectedIds.contains(ch.id)) return ch.name;
    return {};
}

void TalentTreeWidget::updateSpecButtonsVisual()
{
    for (int gi = 0; gi < specGroups.size(); ++gi) {
        const auto key = specGroups[gi].specKey;
        const auto* sp = logic->getSpecialization(key);
        if (!sp) continue;

        for (int li = 0; li < specGroups[gi].levelBtns.size() && li < sp->levels.size(); ++li) {
            auto &bm = specGroups[gi].levelBtns[li];
            const auto &L = sp->levels[li];

            bool taken = false;
            QString label;

            if (!L.choices.isEmpty()) {
                const QString chosen = chosenChoiceName(L);
                taken = !chosen.isEmpty();
                label = taken ? chosen : tr("Выбрать вариант…");
                bm.talentId = taken ? chosen : QString();
            } else {
                taken = selectedIds.contains(L.id);
                label = L.name.isEmpty() ? "-" : L.name;
                bm.talentId = L.id;
            }

            bm.btn->setText(label);
            bm.btn->setChecked(taken);
            bm.btn->setProperty("taken", taken);
            bm.btn->style()->unpolish(bm.btn);
            bm.btn->style()->polish(bm.btn);
        }
    }
}

// -------------------- Правила доступа --------------------

int TalentTreeWidget::takenInTier(int tier) const
{
    int cnt = 0;
    const auto talents = logic->getTierTalents(tier);
    for (const auto& t : talents)
        if (selectedIds.contains(t.id)) ++cnt;
    return cnt;
}

bool TalentTreeWidget::canTakeTierTalent(int tierIndex) const
{
    if (tierIndex == 1) return true;
    return takenInTier(1) >= 2; // Tier2 после ≥2 из Tier1
}

// -------------------- Обработчики кнопок тиров --------------------

void TalentTreeWidget::onTierTalentClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    QString id; QString name;
    for (const auto &bm : tier1Buttons) if (bm.btn == btn) { id = bm.talentId; name = bm.btn->text(); break; }
    if (id.isEmpty())
        for (const auto &bm : tier2Buttons) if (bm.btn == btn) { id = bm.talentId; name = bm.btn->text(); break; }
    if (id.isEmpty()) return;

    bool isTier2 = false;
    for (const auto &bm : tier2Buttons) if (bm.btn == btn) { isTier2 = true; break; }
    if (isTier2 && !canTakeTierTalent(2)) {
        QMessageBox::information(this, tr("Недоступно"),
                                 tr("Сначала возьмите не менее двух талантов первого ранга."));
        return;
    }

    toggleTierTalent(id, name);
    updateTierButtonsEnabled();
    updateTierButtonsVisual();
}

void TalentTreeWidget::toggleTierTalent(const QString& id, const QString& /*nameForUI*/)
{
    if (selectedIds.contains(id)) selectedIds.remove(id);
    else                          selectedIds.insert(id);
    setDirty(true);
}

void TalentTreeWidget::onTierHelpClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    QString id;
    for (const auto &bm : tier1Buttons) if (bm.help == btn) { id = bm.talentId; break; }
    if (id.isEmpty())
        for (const auto &bm : tier2Buttons) if (bm.help == btn) { id = bm.talentId; break; }

    if (id.isEmpty()) return;
    showTalentInfoDialog(id);
}

// -------------------- Обработчики специализаций --------------------

void TalentTreeWidget::onSpecTalentClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    int gi = -1, li = -1;
    for (int g = 0; g < specGroups.size(); ++g) {
        for (int l = 0; l < specGroups[g].levelBtns.size(); ++l) {
            if (specGroups[g].levelBtns[l].btn == btn) { gi = g; li = l; break; }
        }
        if (gi >= 0) break;
    }
    if (gi < 0) return;

    if (lockedSpecKey.isEmpty()) {
        lockedSpecKey = specGroups[gi].specKey;
        updateSpecGroupsEnabled();
    } else if (lockedSpecKey != specGroups[gi].specKey) {
        QMessageBox::information(this, tr("Ветка уже выбрана"),
                                 tr("Вы уже выбрали ветку: %1").arg(logic->getSpecializationName(lockedSpecKey)));
        return;
    }

    if (takeSpecLevelOrChoice(gi, li)) {
        setDirty(true);
        updateSpecButtonsVisual();
        // повторная проверка на «ветка завершена»
        if (!lockedSpecKey.isEmpty() && isSpecCompleted(lockedSpecKey)) {
            lockedSpecKey.clear();
            updateSpecGroupsEnabled();
        }
    }
}

bool TalentTreeWidget::takeSpecLevelOrChoice(int groupIdx, int levelIdx)
{
    const auto key = specGroups[groupIdx].specKey;
    const auto* sp = logic->getSpecialization(key);
    if (!sp) return false;
    if (levelIdx < 0 || levelIdx >= sp->levels.size()) return false;

    // линейность: нельзя брать N+1 без N
    for (int i = 0; i < levelIdx; ++i) {
        const auto &prev = sp->levels[i];
        bool ok = false;
        if (!prev.choices.isEmpty()) {
            for (const auto &ch : prev.choices)
                if (selectedIds.contains(ch.id)) { ok = true; break; }
        } else {
            ok = selectedIds.contains(prev.id);
        }
        if (!ok) {
            QMessageBox::information(this, tr("Недоступно"),
                                     tr("Сначала возьмите предыдущий уровень ветки."));
            return false;
        }
    }

    auto &bm = specGroups[groupIdx].levelBtns[levelIdx];
    const auto &L = sp->levels[levelIdx];

    if (!L.choices.isEmpty()) {
        QStringList items;
        for (const auto &ch : L.choices) items << ch.name;

        bool ok = false;
        const QString chosenName = QInputDialog::getItem(this,
                                                         tr("Выбор варианта"),
                                                         tr("Уровень %1:").arg(levelIdx + 1),
                                                         items, 0, false, &ok);
        if (!ok) return false;

        QString chosenId;
        for (const auto &ch : L.choices) if (ch.name == chosenName) { chosenId = ch.id; break; }
        if (chosenId.isEmpty()) return false;

        for (const auto &ch : L.choices) selectedIds.remove(ch.id); // убрать старый выбор
        selectedIds.insert(chosenId);
        bm.talentId = chosenId;
        bm.btn->setText(chosenName);
        return true;
    } else {
        const QString id = L.id;
        if (id.isEmpty()) return false;

        if (selectedIds.contains(id)) {
            selectedIds.remove(id);
            bm.talentId = id;
            bm.btn->setText(L.name.isEmpty() ? "-" : L.name);
        } else {
            selectedIds.insert(id);
            bm.talentId = id;
            bm.btn->setText(L.name.isEmpty() ? "-" : L.name);
        }
        return true;
    }
}

void TalentTreeWidget::onSpecHelpClicked()
{
    auto *btn = qobject_cast<QPushButton*>(sender());
    if (!btn) return;

    int gi = -1, li = -1;
    for (int g = 0; g < specGroups.size(); ++g) {
        for (int l = 0; l < specGroups[g].levelBtns.size(); ++l) {
            if (specGroups[g].levelBtns[l].help == btn) { gi = g; li = l; break; }
        }
        if (gi >= 0) break;
    }
    if (gi < 0) return;

    const auto key = specGroups[gi].specKey;
    const auto* sp = logic->getSpecialization(key);
    if (!sp || li >= sp->levels.size()) return;

    const auto &L = sp->levels[li];
    QString text;
    if (!L.name.isEmpty())
        text += QString("<b>%1</b><br/>").arg(L.name.toHtmlEscaped());
    if (!L.description.isEmpty())
        text += QString("%1<br/>").arg(L.description.toHtmlEscaped());

    if (!L.choices.isEmpty()) {
        text += "<hr/><b>Варианты:</b><br/>";
        for (const auto &ch : L.choices) {
            text += QString("• <b>%1</b>: %2<br/>")
                        .arg(ch.name.toHtmlEscaped())
                        .arg(ch.description.toHtmlEscaped());
        }
    }

    if (text.isEmpty()) text = tr("Нет описания.");
    QMessageBox::information(this, tr("Информация"), text);
}

// -------------------- Подсказка по id --------------------

QString TalentTreeWidget::talentNameById(const QString& id) const
{
    for (int t = 1; t <= 2; ++t)
        for (const auto &tl : logic->getTierTalents(t))
            if (tl.id == id) return tl.name;

    for (const auto key : logic->getSpecializationKeys()) {
        const auto* sp = logic->getSpecialization(key);
        if (!sp) continue;
        for (const auto &L : sp->levels) {
            if (!L.id.isEmpty() && L.id == id) return L.name;
            for (const auto &ch : L.choices)
                if (ch.id == id) return ch.name;
        }
    }
    return {};
}

QString TalentTreeWidget::talentDescById(const QString& id) const
{
    for (int t = 1; t <= 2; ++t)
        for (const auto &tl : logic->getTierTalents(t))
            if (tl.id == id) return tl.description;

    for (const auto key : logic->getSpecializationKeys()) {
        const auto* sp = logic->getSpecialization(key);
        if (!sp) continue;
        for (const auto &L : sp->levels) {
            if (!L.id.isEmpty() && L.id == id) return L.description;
            for (const auto &ch : L.choices)
                if (ch.id == id) return ch.description;
        }
    }
    return {};
}

void TalentTreeWidget::showTalentInfoDialog(const QString& id)
{
    const QString name = talentNameById(id);
    const QString desc = talentDescById(id);
    QString text;
    if (!name.isEmpty()) text += QString("<b>%1</b><br/>").arg(name.toHtmlEscaped());
    if (!desc.isEmpty()) text += desc.toHtmlEscaped();
    if (text.isEmpty()) text = tr("Нет описания.");
    QMessageBox::information(this, tr("Информация"), text);
}

// -------------------- Сохранение/сброс/назад --------------------

bool TalentTreeWidget::saveSelectedIdsToCharacter()
{
    if (currentCharName.isEmpty()) return false;

    const QString path = characterFilePath(currentCharName);
    QFile f(path);
    if (!f.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, tr("Ошибка"), tr("Не удалось открыть файл персонажа: %1").arg(path));
        return false;
    }
    auto obj = QJsonDocument::fromJson(f.readAll()).object();
    f.close();

    QJsonArray arr;
    for (const auto &id : selectedIds) arr.append(id);
    obj["talents"] = arr;

    if (!f.open(QIODevice::WriteOnly | QIODevice::Truncate)) {
        QMessageBox::warning(this, tr("Ошибка"), tr("Не удалось записать файл персонажа: %1").arg(path));
        return false;
    }
    f.write(QJsonDocument(obj).toJson());
    f.close();
    setDirty(false);
    QMessageBox::information(this, tr("Сохранено"), tr("Таланты сохранены."));
    return true;
}

void TalentTreeWidget::onSaveClicked()
{
    saveSelectedIdsToCharacter();
}

void TalentTreeWidget::onResetClicked()
{
    auto res = QMessageBox::question(this, tr("Подтверждение"),
                                     tr("Сбросить все таланты? Это действие нельзя отменить."),
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::No);
    if (res != QMessageBox::Yes) return;

    selectedIds.clear();
    lockedSpecKey.clear();
    refreshAll();
    updateSpecGroupsEnabled();
    setDirty(true);
}

bool TalentTreeWidget::askDiscardIfDirty()
{
    if (!dirty) return true;
    auto res = QMessageBox::question(this, tr("Несохранённые изменения"),
                                     tr("Сохранить изменения?"),
                                     QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel,
                                     QMessageBox::Cancel);
    if (res == QMessageBox::Cancel) return false;
    if (res == QMessageBox::Yes) return saveSelectedIdsToCharacter();
    return true;
}

void TalentTreeWidget::onBackClicked()
{
    if (!askDiscardIfDirty()) return;
    close();
}

// -------------------- Прочее --------------------

void TalentTreeWidget::setDirty(bool d)
{
    dirty = d;
}

// ---- сервисные проверки ----

bool TalentTreeWidget::isSpecCompleted(const QString& specKey) const
{
    const auto* sp = logic->getSpecialization(specKey);
    if (!sp) return false;
    for (const auto& L : sp->levels) {
        if (L.choices.isEmpty()) {
            if (!selectedIds.contains(L.id)) return false;
        } else {
            bool any = false;
            for (const auto& ch : L.choices)
                if (selectedIds.contains(ch.id)) { any = true; break; }
            if (!any) return false;
        }
    }
    return true;
}
