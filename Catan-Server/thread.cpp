#include "thread.h"

Thread::Thread(int ID, QObject* parent)
        :QThread(parent) {

    this->socketDescriptor = ID;
}

void Thread::run() {

    qDebug() << socketDescriptor << "Thread starts";
    socket = new QTcpSocket();

    if(!socket->setSocketDescriptor(this->socketDescriptor)) {
        return;
    }

    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()), Qt::DirectConnection);
    connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()), Qt::DirectConnection);

    qDebug () << socketDescriptor << "Client Connected";

    exec();
}

void Thread::readyRead() {

    QByteArray data = socket->readAll();

    qDebug() << socketDescriptor << ":Data: " << data;

    int dataNum = QString(data).toInt();

    int power = dataNum * dataNum;

    QByteArray data_send = QByteArray::number(power);

    socket->write(data_send);

}

void Thread::disconnected() {

    qDebug() << socketDescriptor << " Disconnected";
    socket->deleteLater();

    exit(0);
}



