#include "thread.h"
#include "dice.h"
#include "server.h"

Map *Thread::map = new Map();
bool Thread::isFirstOne = true;
QVector<QString> Thread::turns;
int Thread::numberOfPlayersConnected = 0;
int Thread::witchTurn = 0;
int Thread::GameMode = 3;

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

QString Thread::colorToStr(COLOR color)
{
    if (color == Red)
        return "Red";
    else if (color == Blue)
        return "Blue";
    else if (color == Green)
        return "Green";
    else if (color == Yellow)
        return "Yellow";
    else
        return "-1";
}

void Thread::command(QString data) {
    if (data.contains("Dice")) {
        // generate diveValue;
        Dice dice;
        int _diceValue = dice.GenerateValue();

        // send Dice number
        writeData(_diceValue);

    } else if (data.contains("GetColor")) {
        QString color = colorToStr(playerColor);
        writeData(color);

    } else if (data.contains("GetNumberOfOnlinePlayers")) {
        writeData(Thread::numberOfPlayersConnected);

    } else if (data.contains("GetGameMode")) {
        // send gameMode
        writeData(Thread::GameMode);

    } else if (data.contains("chooseTurn")) {
        // assuing all player are connected to server and sent their names
        writeData(QString(Thread::turns[Thread::numberOfPlayersConnected]));

    } else if (data.contains("GameMode")) {
        Thread::GameMode = data.split(".")[1].toInt();

    } else if (data.contains("GiveName")) {
        QString name = data.split(".")[0];
        Thread::turns.push_back(name);
        Thread::numberOfPlayersConnected++;

    } else if (data.contains("EndTurn")) {
        // completed
        // contorol the numberOfPlayersConnected
        if (Thread::numberOfPlayersConnected >= 3) {
            Thread::numberOfPlayersConnected = 0;

        } else {
            Thread::numberOfPlayersConnected++;

        }

        // send next turn
        writeData(QString(Thread::turns[Thread::numberOfPlayersConnected]));

    }else if (data.contains("IsFirstOne")) {
        QString dataToSend = "";
        if (Thread::isFirstOne == true)
            dataToSend = "true";
        else
            dataToSend = "false";

        // send data to client
        writeData(dataToSend);

        // change the firstone status
        Thread::isFirstOne = false;


    } else if (data.contains("ChanceNumbers")) {
        QString dataToSend = "";
        for (int i = 0 ; i < map->chanceNumbers.size() ; i++)
            dataToSend += QString::number(map->chanceNumbers[i]) + ".";

        writeData(dataToSend);

    } else {
        qDebug() << "Incorrect format for command from: " << socketDescriptor;
    }

}

void Thread::readyRead() {

    QByteArray data = socket->readAll();

    qDebug() << " Data in: " << data;

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
    qDebug() << " Data out: " << data_send;
    socket->write(data_send);
}

void Thread::writeData(int msg) {
    QByteArray data_send = QByteArray::number(msg);
    qDebug() << " Data out: " << data_send;
    socket->write(data_send);
}






