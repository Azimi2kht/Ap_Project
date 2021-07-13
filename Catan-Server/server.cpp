#include "server.h"

Server::Server()
{

}

void Server::start_server()
{
    if (!this->listen(QHostAddress::Any, 1234)) {
        qDebug() << "Could not start server";
    } else {
        qDebug() << "Listening...";
    }
}

void Server::incoming_connection(int socketDiscriptor)
{
    qDebug() << socketDiscriptor <<" Connection...";
    Thread *thread = new Thread(socketDiscriptor);
    connect(thread, SIGNAL(finished())
            ,thread ,SLOT(deleteLater()));

    thread->start();

}
