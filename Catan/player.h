#ifndef PLAYER_H
#define PLAYER_H

#include <QVector>
// to be removed :
#include <QPushButton>
#include <QString>
#include "clientsocket.h"

class Player {
public:
    Player(QString _name);
    void addPiece(QPushButton* _button);

private:
    QVector<QPushButton*> pieces;
    QString name;
    int point;
    ClientSocket clientSocket;

public slots:
    void on_diceButton_clicked();
};

#endif // PLAYER_H
