#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QDebug>
#include "thread.h"

class Server : public QTcpServer
{
public:
    explicit Server(QObject *parent = nullptr);
    void StartServer();

protected:
    void incomingConnection(qintptr socketDiscriptor);

};

#endif // MYSERVER_H
