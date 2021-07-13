#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QDebug>
#include "mythread.h"

class MyServer : public QTcpServer
{
public:
    explicit MyServer(QObject *parent = nullptr);
    void StartServer();

protected:
    void incomingConnection(qintptr socketDiscriptor);

};

#endif // MYSERVER_H
