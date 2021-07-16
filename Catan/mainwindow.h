#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QIcon>
#include "match.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // constructors
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:

    void on_pushButton_82_clicked();

    void on_pushButton_51_clicked();

private:
    Ui::MainWindow *ui;
    Match *match;

    // methods
    void setPictureForHouse(QString address);
    void setPictureForRoad(QString address);


};
#endif // MAINWINDOW_H
