#ifndef PLAYER_H
#define PLAYER_H

#include <QVector>
// to be removed :
#include <QPushButton>
#include <QString>
#include "clientsocket.h"

enum COLOR {
    Red, Green, Blue, Yellow
};

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
    COLOR getPlayerColor() {return playerColor;}

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
    COLOR playerColor;

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
