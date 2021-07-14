#include "hex.h"
#include "game.h"

extern Game* game;

Hex::Hex(hexType type ,QGraphicsItem *parent) {

    // set Points
    QVector<QPointF> hexPoints;
    hexPoints << QPointF(1, 0) << QPointF(0, 1)  << QPointF(0, 2)
              << QPointF(1, 3) << QPointF(2, 2)  << QPointF(2 ,1);

    // scale the poly
    int SCALE_BY = 35;
    for (size_t i = 0, n = hexPoints.size(); i < n ; i++) {
        hexPoints[i] *= SCALE_BY;
    }

     //create a QPyolygon with the scaled points
      hexagon = new QPolygonF(hexPoints);

    // draw the polygon
    setPolygon(*hexagon);

    // create vertixes :
    Vertix *v0 = new Vertix();
    Vertix *v1 = new Vertix();
    Vertix *v2 = new Vertix();
    Vertix *v3 = new Vertix();
    Vertix *v4 = new Vertix();
    Vertix *v5 = new Vertix();

    // add vetixes to this->scene
    for( int i = 0 ; i  < vertixes.size() ; i++)
        scene()->addItem(vertixes[i]);

}

