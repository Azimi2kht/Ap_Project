#include "game.h"
#include "hexboard.h"


Game::Game(QWidget *parent) {
    // set up the screen
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1024, 768);

    // set up back ground
    setBackgroundBrush(QBrush(QImage(":/images/Resources/back-ground-light-blue.jpg")));

    // set up the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0 , 1024, 768);
    setScene(scene);
}

void Game::start() {
    // test code
    hexBoard = new HexBoard();
    hexBoard->placeHexes();

}
