#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>
#include <QVector>

class Thread : public QThread{
Q_OBJECT
public:
    explicit Thread(int ID, QObject *parent = 0);
    void run();


private:
    QTcpSocket *socket;
    qintptr socketDescriptor;
    void command(QString data);
    QVector<int> diceValues;
    int countDice;

public slots:
    void readyRead();
    void disconnected();
    void writeData(QString msg);
    void writeData(int msg);


};

#endif // MYTHREAD_H
