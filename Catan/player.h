#ifndef PLAYER_H
#define PLAYER_H

#include <QVector>
// to be removed :
#include <QPushButton>

class Player {
public:
    Player();
    void addPiece(QPushButton* _button);


private:
    QVector<QPushButton*> pieces;
    int point;
};

#endif // PLAYER_H
