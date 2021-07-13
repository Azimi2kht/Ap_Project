#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QTcpSocket>
#include <QDebug>

class Thread : public QThread{
Q_OBJECT
public:
    explicit Thread(int ID, QObject *parent = 0);
    void run();

private:
    QTcpSocket *socket;
    qintptr socketDescriptor;

public slots:
    void readyRead();
    void disconnected();

};

#endif // MYTHREAD_H
