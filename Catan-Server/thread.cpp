#include "thread.h"
#include "dice.h"
#include "server.h"


Thread::Thread(int ID, QObject* parent) : countDice(0),
        QThread(parent) {

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

void Thread::command(QString data) {
//    if (data.contains("Dice")) {
//        Dice dice;

//        int _diceValue = dice.GenerateValue();

//        // considered data foramt : "Playername:Dice:"
//        if (countDice < 1) {

//            struct Name_Dice temp {.name = data, .diceValue = _diceValue};
//            Server::firstThreeDice.push_back (temp);
//        }

//        // add value to diceValue for resourceDistribution :
//        diceValues.push_back(_diceValue);

//        writeData(_diceValue);
//        countDice++;

//    }
//      else if (data.contains("chooseTurn")) {

//    }
//    else if (data.contains("resourceDistribution")) {

//    } else if (data.contains("Dice")) {

//    } else {
//        qDebug() << "Incorrect format for command from :" << socketDescriptor;
//    }

}

void Thread::readyRead() {

    QByteArray data = socket->readAll();

    qDebug() << socketDescriptor << ":Data: " << data;

    QString strData(data);

    command(strData);

}

void Thread::disconnected() {

    qDebug() << socketDescriptor << " Disconnected";
    socket->deleteLater();

    exit(0);
}

void Thread::writeData(QString msg) {
    QByteArray data_send = QByteArray::fromStdString(msg.toStdString());
    socket->write(data_send);
}

void Thread::writeData(int msg) {
    QByteArray data_send = QByteArray::number(msg);
    socket->write(data_send);
}






