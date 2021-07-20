#include "mainwindow.h"
#include "initial.h"
#include "match.h"
#include <QApplication>
#include "clientsocket.h"
#include "name.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    ClientSocket socket;
    QString response = socket.Connect("127.0.0.1", 1234,QString("IsFirstOne"));
    bool resbo;

    if (response == "true")
        resbo = true;
    else
        resbo = false;

    if (resbo) {
        Initial *w = new Initial();
        w->show();
    } else {
        Name *w = new Name();
        w->show();
    }
    // goes to slot login
//    MainWindow w;
//    w.show();

    return a.exec();
}
