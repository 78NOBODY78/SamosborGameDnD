#ifndef TALENTLOGIC_H
#define TALENTLOGIC_H

#include <QObject>
#include <QMap>
#include <QVector>
#include <QString>
#include <QStringList>

class TalentLogic : public QObject
{
    Q_OBJECT
public:
    explicit TalentLogic(QObject* parent = nullptr);

    // ====== Модель данных ======
    struct Talent {
        QString id;
        QString name;
        QString description;
        int tier = 0;
        int row  = -1;
        int col  = -1;
        QStringList prerequisites;
    };

    struct SpecChoice {
        QString id;
        QString name;
        QString description;
    };

    struct SpecLevel {
        QString id;                 // если пусто — это "уровень-выбор" (choices)
        QString name;
        QString description;
        QVector<SpecChoice> choices;
    };

    struct Specialization {
        QString key;                // ключ в JSON
        QString name;
        QVector<SpecLevel> levels;
    };

    // ====== API загрузки ======
    void clear();
    bool loadFromFile(const QString& jsonPath);

    // ====== Доступ к данным ======
    QString getClassName() const;
    int getMaxTier() const;
    QVector<Talent> getTierTalents(int tier) const;

    QStringList getSpecializationKeys() const;
    QString getSpecializationName(const QString& key) const;
    const Specialization* getSpecialization(const QString& key) const;

    // Возвращает ПОЛНЫЙ путь к JSON (или пустую строку, если не найден).
    static QString defaultJsonPathForClass(const QString& className);

private:
    // Парсинг
    bool parseRoot(const QJsonObject& root);
    void parseTiers(const QJsonObject& tiersObj);
    void parseOneTier(int tierNum, const QJsonArray& arr);
    void parseSpecializations(const QJsonObject& specsObj);

    // Поиск файла
    static QStringList candidateFileNames(const QString& classNameNorm);
    static QString tryLocate(const QStringList& fileNames);

private:
    QString className;
    QMap<int, QVector<Talent>> tiers;               // tier -> talents
    QMap<QString, Specialization> specializations;  // specKey -> spec
};

#endif // TALENTLOGIC_H
