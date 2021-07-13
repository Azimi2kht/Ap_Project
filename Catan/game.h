#ifndef GAME_H
#define GAME_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "hexboard.h"


class Game : public QGraphicsView{
public:
    // constructors
    Game(QWidget *parent = NULL);

    // public methods
    void start();

    // public attributes
    QGraphicsScene *scene;

    HexBoard *hexBoard;

    // or enum
    QString whosTurn;

private:



};

#endif // GAME_H
