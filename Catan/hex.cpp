#include "hex.h"
#include "game.h"
#include "resourcehex.h"

extern Game* game;

Hex::Hex(hexType type ,QGraphicsItem *parent) {

    // set Points
    QVector<QPointF> hexPoints;
    hexPoints << QPointF(1, 0) << QPointF(0, 1)  << QPointF(0, 2)
              << QPointF(1, 3) << QPointF(2, 2)  << QPointF(2 ,1);

    // scale the poly
    int SCALE_BY = 40;
    for (size_t i = 0, n = hexPoints.size(); i < n ; i++) {
        hexPoints[i] *= SCALE_BY;
    }

     //create a QPyolygon with the scaled points
      hexagon = new QPolygonF(hexPoints);


    // draw the polygon
    setPolygon(*hexagon);

}

