#include "myserver.h"

MyServer::MyServer(QObject *parent) : QTcpServer(parent) {

}

void MyServer::StartServer() {
    if(!this->listen(QHostAddress::Any, 1234)) {
        qDebug() << "could not start server";
    } else {
        qDebug() << "Listening";
    }
}

void MyServer::incomingConnection(qintptr socketDiscriptor) {
    qDebug() << socketDiscriptor << " Connecting";

    MyThread *thread = new MyThread(socketDiscriptor, this);

    connect(thread, SIGNAL(finished()), thread, SLOT(deleteLater()));
    thread->start();
}
