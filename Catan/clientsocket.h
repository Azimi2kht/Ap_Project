#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <QTcpSocket>
#include <QDebug>
#include <QObject>

class ClientSocket : public QObject{
    Q_OBJECT
public:
    ClientSocket() {};
    ~ClientSocket() {};

    QString Connect(QString host, quint16 port,QString data );

private:
    QTcpSocket *socket;

};

#endif // CLIENTSOCKET_H
