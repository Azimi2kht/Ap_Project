#include <QApplication>
#include "server.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Server Server;
    Server.StartServer();

    return a.exec();
}
