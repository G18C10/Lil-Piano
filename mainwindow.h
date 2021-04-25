#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QKeyEvent>
#include <QSound>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ButtonC_pressed();

    void on_ButtonC_released();

    void on_ButtonD_pressed();

    void on_ButtonD_released();

    void on_ButtonE_pressed();

    void on_ButtonE_released();

    void on_ButtonF_pressed();

    void on_ButtonF_released();

    void on_ButtonG_pressed();

    void on_ButtonG_released();

    void on_ButtonA_pressed();

    void on_ButtonA_released();

    void on_ButtonH_pressed();

    void on_ButtonH_released();

    void on_ButtonC2_pressed();

    void on_ButtonC2_released();

    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;

    void on_actionSterowanie_triggered();

    void on_actionO_programie_triggered();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* play;
};
#endif // MAINWINDOW_H
