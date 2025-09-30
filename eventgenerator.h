#ifndef EVENTGENERATOR_H
#define EVENTGENERATOR_H

#include <QObject>
#include <QString>
#include <QMap>
#include <QVector>

class TerminalPrinter;

// Генератор случайных событий (обычные и аномальные)
class EventGenerator : public QObject
{
    Q_OBJECT
public:
    explicit EventGenerator(TerminalPrinter* terminal, QObject* parent = nullptr);

    void generate(); // основной метод

    // Типы обычных событий
    enum class EventType { Negative, Neutral, Positive };

private:
    struct AnomalyGrade {
        QString name;   // название аномалии
        QString color;  // цвет для оформления
    };

    TerminalPrinter* terminal = nullptr;

    QMap<EventType, QVector<QString>> eventTexts; // шаблоны событий по типам
    QMap<int, AnomalyGrade> anomalyGrades;        // карта d100 -> аномалия

    // Логика
    bool isAnomaly(int roll) const;
    EventType categorize(int roll) const;
    QString describeAnomaly(int roll) const;

    // Инициализация
    void loadEventTemplates();
    void loadAnomalyGrades();
};

#endif // EVENTGENERATOR_H
