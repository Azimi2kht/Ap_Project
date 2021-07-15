#ifndef PLAYER_H
#define PLAYER_H

#include <QVector>
// to be removed :
#include <QPushButton>
#include <QString>
#include "clientsocket.h"
#include "player.h"

class Player {
public:
    Player(QString _name);
    void addPiece(QPushButton* _button);

    // getters
    int getNumOfSheep() {return numOfSheep;}
    int getNumOfWood() {return numOfWood;}
    int getNumOfBrick() {return numOfBrick;}
    int getNumOfWheat() {return numOfWheat;}
    int getNumOfRock() {return numOfRock;}

    // setter
    void decreaseSheep() { numOfSheep--;}
    void decreaseWheat() { numOfWheat--;}
    void decreaseRock() { numOfRock--;}
    void decreaseBrick() { numOfBrick--;}
    void decreaseWood() { numOfWood--;}




private:
    QVector<QPushButton*> pieces;
    QString name;
    int point;
    ClientSocket clientSocket;

    // how player gets the resources ??!! TODO
    // resources
    int numOfSheep;
    int numOfBrick;
    int numOfWheat;
    int numOfRock;
    int numOfWood;

public slots:
    void on_diceButton_clicked();
};

#endif // PLAYER_H
