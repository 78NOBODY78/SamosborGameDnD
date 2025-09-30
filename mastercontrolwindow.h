#ifndef MASTERCONTROLWINDOW_H
#define MASTERCONTROLWINDOW_H



#include <QWidget>
#include <QGroupBox>

class SamosborController;
class TerminalPrinter;
class EventGenerator;
class BattleController;
class InitiativeTracker;
class SuccessCalculator;

QT_BEGIN_NAMESPACE
namespace Ui { class MasterControlWindow; }
QT_END_NAMESPACE

// === Класс MasterControlWindow ===
// Главное окно режима Мастера. Объединяет все инструменты:
// терминал, самосбор, генератор событий, боевой модуль, трекер инициативы, калькулятор успеха и т.д.
class MasterControlWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MasterControlWindow(QWidget *parent = nullptr); // Конструктор
    ~MasterControlWindow(); // Деструктор

private:
    Ui::MasterControlWindow *ui; // Интерфейс, сгенерированный Qt Designer

    // Контроллеры всех подсистем
    SamosborController* samosbor = nullptr;
    TerminalPrinter* terminal = nullptr;
    EventGenerator* eventGenerator = nullptr;
    BattleController* battleController = nullptr;
    InitiativeTracker* initiativeTracker = nullptr;
    SuccessCalculator* successCalculator = nullptr;

    // === Дополнительно для управления терминалом ===
    bool terminalVisible = true;          // По умолчанию терминал включен
    QString terminalBackup;               // Буфер для скрытых сообщений терминала

    // Инициализация всех контроллеров и соединений сигналов/слотов
    void setupConnections();
    void setupControllers();

    QTimer *timer;            // Таймер для обновления
    QStringList hexLines;     // Список строк с hex-числами
    int maxVisibleLines;      // Максимальное количество видимых строк

    QString generateRandomHexLine();  // Генерация случайной hex-строки
    void calculateMaxVisibleLines();  // Расчет максимального числа строк

private slots:
    // Переключение режимов терминала (лог, журнал, нарратив)
    void on_radioButtonLogMode_toggled(bool checked);
    void on_radioButtonJournalMode_toggled(bool checked);
    void on_radioButtonNarrativeMode_toggled(bool checked);

    // Включение/выключение визуального терминала
    void on_pushButtonTerminalON_OFF_clicked();

    // Управление самосбором
    void on_pushButtonSamosborStart_clicked();
    void on_pushButtonSamosborPause_clicked();
    void on_pushButtonSamosborResume_clicked();
    void on_pushButtonSamosborManualTrigger_clicked();      // Ручной запуск самосбора
    void on_pushButtonSamosborManualSlowdown_clicked();     // Вызов замедления

    // Генерация случайного события
    void on_pushButtonRandomEvent_clicked();

    // Кнопка возврата в предыдущее окно
    void on_pushButtonBack_clicked();

    // А по приколу
    void updateHexDisplay();
};

#endif // MASTERCONTROLWINDOW_H
