#include "server.h"

Server::Server(QObject *parent) : QTcpServer(parent) {

}

void Server::StartServer() {
    if(!this->listen(QHostAddress::Any, 1234)) {
        qDebug() << "could not start server";
    } else {
        qDebug() << "Listening";
    }
}

void Server::incomingConnection(qintptr socketDiscriptor) {
    qDebug() << socketDiscriptor << " Connecting";

    Thread *thread = new Thread(socketDiscriptor, this);

    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}


void Server::Bank(QString){

}
