#ifndef WAITING_H
#define WAITING_H

#include <QMainWindow>
#include "clientsocket.h"
#include "mainwindow.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Waiting; }
QT_END_NAMESPACE

class Waiting : public QMainWindow
{
    Q_OBJECT

public:
    Waiting(QWidget *parent = nullptr);
    ~Waiting();

private slots:
    void on_Refresh_clicked();

    void on_StartButton_clicked();

private:
    Ui::Waiting *ui;
    static int numberOfOnlinePlayers;

};
#endif // WAITING_H
