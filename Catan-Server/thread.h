#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QVector>
#include <QString>
#include "map.h"

enum COLOR {
    Green, Red, Blue, Yellow
};

class Thread : public QThread{
Q_OBJECT
public:
    explicit Thread(int ID, QObject *parent = 0);
    void run();
    void setColor(COLOR _color) {playerColor = _color;}
    QString colorToStr(COLOR color);

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
    void command(QString data);
    QVector<int> diceValues;
    int countDice;
    COLOR playerColor;
    static Map *map;
    static bool isFirstOne;
    static QVector<QString> turns;
    static int witchTurn;
    static int numberOfPlayersConnected;
    static int GameMode;

public slots:
    void readyRead();
    void disconnected();
    void writeData(QString msg);
    void writeData(int msg);


};

#endif // MYTHREAD_H
