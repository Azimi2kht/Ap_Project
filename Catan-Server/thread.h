#ifndef THREAD_H
#define THREAD_H

#include <QThread>
#include <QDebug>
#include <QTcpSocket>

class Thread : public QThread
{
Q_OBJECT
public:
    explicit Thread(int ID);
    void run();

private:
    QTcpSocket *socket;
    int socketDescriptor;

public slots:
    void readyRead();
    void disconnected();

signals:
    void error(QTcpSocket::SocketError socketError);

};

#endif // THREAD_H
