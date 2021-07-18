#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QDebug>
#include "thread.h"
#include <QVector>

struct Name_Dice {
    QString name;
    int diceValue;
};

class Server : public QTcpServer
{
public:
    explicit Server(QObject *parent = nullptr);
    void StartServer();
    void Bank(QString);

protected:
    void incomingConnection(qintptr socketDiscriptor);


    friend class Thread;

private:
    // resources :
    int sheep=20;
    int wood=20;
    int rock=20;
    int wheat=20;
    int brick=20;
    int pointCard=5;
    int knightCard=14;
    int roadBuildCard=2;
    int extraResourcesCard=2;
    int exclusionCard=2;

    // dice values:
    static QVector<Name_Dice> firstThreeDice;

    // Number of threads
    int numOfThreads;

    // get the color from numberOfThreads
    COLOR getColor(int numOfThead);

};


#endif // MYSERVER_H
