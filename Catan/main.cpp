#include "mainwindow.h"
#include "player.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    Player *p = new Player("Jafar");
//    p->on_diceButton_clicked();

    return a.exec();
}
