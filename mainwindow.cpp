#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog2.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    play = new QMediaPlayer(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ButtonC_pressed()
{
    ui->ButtonC->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/C.wav"));
    play->play();

}

void MainWindow::on_ButtonC_released()
{
    ui->ButtonC->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}

void MainWindow::on_ButtonD_pressed()
{
    ui->ButtonD->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/D.wav"));
    play->play();
}

void MainWindow::on_ButtonD_released()
{
    ui->ButtonD->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}

void MainWindow::on_ButtonE_pressed()
{
    ui->ButtonE->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/E.wav"));
    play->play();
}

void MainWindow::on_ButtonE_released()
{
    ui->ButtonE->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}

void MainWindow::on_ButtonF_pressed()
{
    ui->ButtonF->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/F.wav"));
    play->play();
}

void MainWindow::on_ButtonF_released()
{
    ui->ButtonF->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}

void MainWindow::on_ButtonG_pressed()
{
    ui->ButtonG->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/G.wav"));
    play->play();
}

void MainWindow::on_ButtonG_released()
{
    ui->ButtonG->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}

void MainWindow::on_ButtonA_pressed()
{
    ui->ButtonA->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/A.wav"));
    play->play();
}

void MainWindow::on_ButtonA_released()
{
    ui->ButtonA->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}

void MainWindow::on_ButtonH_pressed()
{
    ui->ButtonH->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/H.wav"));
    play->play();
}

void MainWindow::on_ButtonH_released()
{
    ui->ButtonH->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}

void MainWindow::on_ButtonC2_pressed()
{
    ui->ButtonC2->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
    play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/C2.wav"));
    play->play();
}

void MainWindow::on_ButtonC2_released()
{
    ui->ButtonC2->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
    play->stop();
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Q)
    {
        ui->ButtonC->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/C.wav"));
        play->play();
    }
    else if (event->key() == Qt::Key_W)
    {
        ui->ButtonD->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/D.wav"));
        play->play();
    }
    else if (event->key() == Qt::Key_E)
    {
        ui->ButtonE->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/E.wav"));
        play->play();
    }
    else if (event->key() == Qt::Key_R)
    {
        ui->ButtonF->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/F.wav"));
        play->play();
    }
    else if(event->key() == Qt::Key_T)
    {
        ui->ButtonG->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/G.wav"));
        play->play();
    }
    else if (event->key() == Qt::Key_Y)
    {
        ui->ButtonA->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/A.wav"));
        play->play();
    }
    else if (event->key() == Qt::Key_U)
    {
        ui->ButtonH->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/H.wav"));
        play->play();
    }
    else if (event->key() == Qt::Key_I)
    {
        ui->ButtonC2->setStyleSheet("QPushButton:pressed { border: 3px solid black; background-color: #ddd; color:black; font-weight:800; }");
        play->setMedia(QUrl("qrc:/sounds/yamaha/qt_piano/yamaha/C2.wav"));
        play->play();
    }
        ;
}
void MainWindow::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Q)
    {
        ui->ButtonC->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else if (event->key() == Qt::Key_W)
    {
        ui->ButtonD->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else if (event->key() == Qt::Key_E)
    {
        ui->ButtonE->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else if (event->key() == Qt::Key_R)
    {
        ui->ButtonF->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else if(event->key() == Qt::Key_T)
    {
        ui->ButtonG->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else if (event->key() == Qt::Key_Y)
    {
        ui->ButtonA->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else if (event->key() == Qt::Key_U)
    {
        ui->ButtonH->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else if (event->key() == Qt::Key_I)
    {
        ui->ButtonC2->setStyleSheet("QPushButton { border: 3px solid black; background-color: white; color:black; font-weight:800; }");
        play->stop();
    }
    else{
    }
        ;
}

void MainWindow::on_actionSterowanie_triggered()
{
    Dialog dialog;
    dialog.exec();
}

void MainWindow::on_actionO_programie_triggered()
{
    Dialog2 dialog2;
    dialog2.exec();
}
