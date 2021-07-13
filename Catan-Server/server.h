#ifndef SERVER_H
#define SERVER_H

#include <QTcpServer>
#include <QDebug>
#include "thread.h"

class Server : public QTcpServer
{
public:
    Server();
    void start_server();

protected:
    void incoming_connection(int socketDiscriptor);
};

#endif // SERVER_H
