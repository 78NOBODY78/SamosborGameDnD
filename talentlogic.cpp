#include "talentlogic.h"

#include <QCoreApplication>
#include <QDir>
#include <QFile>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QRegularExpression>
#include <QDebug>

TalentLogic::TalentLogic(QObject* parent) : QObject(parent) {}

void TalentLogic::clear() {
    className.clear();
    tiers.clear();
    specializations.clear();
}

bool TalentLogic::loadFromFile(const QString& jsonPath)
{
    clear();

    QFile f(jsonPath);
    if (!f.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qWarning() << "[TalentLogic] Cannot open" << jsonPath;
        return false;
    }

    const QByteArray data = f.readAll();
    QJsonParseError perr{};
    const QJsonDocument doc = QJsonDocument::fromJson(data, &perr);

    if (perr.error != QJsonParseError::NoError) {
        qWarning() << "[TalentLogic] JSON parse error in" << jsonPath << ":" << perr.errorString()
        << "at offset" << perr.offset;
        return false;
    }
    if (!doc.isObject()) {
        qWarning() << "[TalentLogic] Root is not an object in" << jsonPath
                   << "(type:" << (doc.isArray() ? "array" : "null") << ")";
        return false;
    }
    return parseRoot(doc.object());
}

bool TalentLogic::parseRoot(const QJsonObject& root)
{
    className = root.value("class").toString();

    if (root.contains("tiers") && root.value("tiers").isObject())
        parseTiers(root.value("tiers").toObject());

    if (root.contains("specializations") && root.value("specializations").isObject())
        parseSpecializations(root.value("specializations").toObject());

    return true;
}

void TalentLogic::parseTiers(const QJsonObject& tiersObj)
{
    for (auto it = tiersObj.begin(); it != tiersObj.end(); ++it) {
        bool ok = false;
        const int tierNum = it.key().toInt(&ok);
        if (!ok || !it.value().isArray()) continue;
        parseOneTier(tierNum, it.value().toArray());
    }
}

void TalentLogic::parseOneTier(int tierNum, const QJsonArray& arr)
{
    QVector<Talent> list;
    list.reserve(arr.size());
    for (const auto& v : arr) {
        if (!v.isObject()) continue;
        const QJsonObject o = v.toObject();

        Talent t;
        t.tier = tierNum;
        t.id   = o.value("id").toString();
        t.name = o.value("name").toString();
        t.description = o.value("description").toString();

        if (o.contains("position") && o.value("position").isArray()) {
            const auto pos = o.value("position").toArray();
            if (pos.size() >= 2) {
                t.row = pos.at(0).toInt();
                t.col = pos.at(1).toInt();
            }
        }
        if (o.contains("prerequisites") && o.value("prerequisites").isArray()) {
            const auto pr = o.value("prerequisites").toArray();
            for (const auto& pv : pr) t.prerequisites << pv.toString();
        }

        if (t.id.isEmpty() || t.name.isEmpty()) continue;
        list.push_back(std::move(t));
    }
    if (!list.isEmpty()) tiers.insert(tierNum, list);
}

void TalentLogic::parseSpecializations(const QJsonObject& specsObj)
{
    for (auto it = specsObj.begin(); it != specsObj.end(); ++it) {
        const QString key = it.key();
        if (!it.value().isObject()) continue;

        const QJsonObject specObj = it.value().toObject();
        Specialization sp;
        sp.key  = key;
        sp.name = specObj.value("name").toString();

        const auto levels = specObj.value("levels").toArray();
        for (const auto& v : levels) {
            if (!v.isObject()) continue;
            const QJsonObject lv = v.toObject();

            SpecLevel L;
            L.id   = lv.value("id").toString();
            L.name = lv.value("name").toString();
            L.description = lv.value("description").toString();

            if (lv.contains("choices") && lv.value("choices").isArray()) {
                const auto choices = lv.value("choices").toArray();
                for (const auto& chV : choices) {
                    if (!chV.isObject()) continue;
                    const QJsonObject chO = chV.toObject();
                    SpecChoice c;
                    c.id = chO.value("id").toString();
                    c.name = chO.value("name").toString();
                    c.description = chO.value("description").toString();
                    if (!c.id.isEmpty()) L.choices.push_back(std::move(c));
                }
            }
            sp.levels.push_back(std::move(L));
        }
        specializations.insert(sp.key, std::move(sp));
    }
}

// ===== API =====

QString TalentLogic::getClassName() const { return className; }

int TalentLogic::getMaxTier() const {
    if (tiers.isEmpty()) return 0;
    int maxKey = 0;
    for (auto it = tiers.constBegin(); it != tiers.constEnd(); ++it)
        maxKey = qMax(maxKey, it.key());
    return maxKey;
}

QVector<TalentLogic::Talent> TalentLogic::getTierTalents(int tier) const
{
    return tiers.value(tier);
}

QStringList TalentLogic::getSpecializationKeys() const
{
    QStringList keys = specializations.keys();
    keys.sort();
    return keys;
}

QString TalentLogic::getSpecializationName(const QString& key) const
{
    return specializations.contains(key) ? specializations.value(key).name : QString();
}

const TalentLogic::Specialization* TalentLogic::getSpecialization(const QString& key) const
{
    auto it = specializations.constFind(key);
    return (it == specializations.constEnd()) ? nullptr : &it.value();
}

// ===== Поиск нужного JSON =====

static QString normalizeClass(const QString& in)
{
    QString s = in.simplified().toLower();
    s.replace(QRegularExpression("\\s+"), " ");
    return s;
}

QStringList TalentLogic::candidateFileNames(const QString& classNameNorm)
{
    // Базовый ключ
    QString key;
    if (classNameNorm.contains("офицер") && classNameNorm.contains("безопас"))
        key = "security_officer";
    else if (classNameNorm.contains("инженер"))
        key = "engineer";
    else if (classNameNorm.contains("механик"))
        key = "mechanic";
    else if (classNameNorm.contains("медик") || classNameNorm.contains("доктор"))
        key = "doctor";
    else if (classNameNorm.contains("ассистент") || classNameNorm.contains("помощник") || classNameNorm.contains("помошник"))
        key = "assistant";

    if (key.isEmpty())
        return {};

    // Возможные имена файлов
    return {
        QString("talentdata_%1.json").arg(key),
        QString("talentdata-%1.json").arg(key)
    };
}

QString TalentLogic::tryLocate(const QStringList& names)
{
    if (names.isEmpty()) return {};

    // Кандидаты директорий
    QStringList bases;
    bases << QDir::currentPath();
    bases << (QCoreApplication::instance() ? QCoreApplication::applicationDirPath() : QString());
    // рядом с exe → ../
    if (!bases.last().isEmpty())
        bases << QDir(bases.last()).absoluteFilePath("..");

    // для каждой базы ищем data/talents и ещё пару вариантов
    QStringList folders;
    for (const QString& b : bases) {
        if (b.isEmpty()) continue;
        folders << QDir(b).absoluteFilePath("data/talents");
        folders << QDir(b).absoluteFilePath("data");
        folders << QDir(b).absoluteFilePath("../data/talents");
    }
    // относительные варианты на всякий случай
    folders << "data/talents" << "data";

    for (const QString& folder : folders) {
        for (const QString& name : names) {
            const QString full = QDir(folder).absoluteFilePath(name);
            if (QFile::exists(full)) return full;
        }
    }

    // Детальное логирование — чем именно пробовали
    qWarning() << "[TalentLogic] Talent JSON not found; tried names:" << names
               << "in dirs:" << folders;
    return {};
}

QString TalentLogic::defaultJsonPathForClass(const QString& className)
{
    const QString norm = normalizeClass(className);
    const QStringList files = candidateFileNames(norm);
    if (files.isEmpty()) {
        qWarning() << "[TalentLogic] Unknown class name:" << className;
        return {};
    }
    return tryLocate(files);
}
