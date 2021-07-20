#include "server.h"

Server::Server(QObject *parent) : QTcpServer(parent) , numOfThreads(0) {  

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

    // set playerColor for thread
    thread->setColor(getColor(numOfThreads));
    numOfThreads++;
    qDebug() << numOfThreads;

    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}

COLOR Server::getColor(int numOfThead) {
    if (numOfThead == 0)
        return Red;
    else if (numOfThead == 1)
        return Green;
    else if (numOfThead == 2)
        return Blue;
    else
        return Red;
}
