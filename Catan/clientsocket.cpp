#include "clientsocket.h"

QString ClientSocket::Connect(QString host, quint16 port,QString data ) {
    socket = new QTcpSocket(this);

    socket->connectToHost(host, port);

    if(socket->waitForConnected(3000)) {
        qDebug() << "Connected!";

        // convert QString to QByteArray (c-style string)
        QByteArray ba = data.toLocal8Bit();

        socket->write(ba);

        socket->waitForBytesWritten(1000);
        socket->waitForReadyRead(3000);

        QString recieved = socket->readAll();

        socket->close();

        return recieved;
    } else {
        qDebug() << "Not Connected";
        return "0";
    }
}
