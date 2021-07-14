#ifndef HEX_H
#define HEX_H

#include <QGraphicsPolygonItem>
#include <QPointF>
#include <QVector>
#include <QImage>
#include <QBrush>
#include <QPen>
#include "vertix.h"

enum hexType {
    wheat, brick, rock, sheep, wood, sea, desert
};

class Hex : public QGraphicsPolygonItem {
public:
    // constructor
    Hex(hexType type, QGraphicsItem* parent = NULL);

    // getter/setter
    QPolygonF *getHexagon() {return hexagon;}
    QBrush *getBrush() {return brush;}

protected:
    QImage *image;
    QBrush *brush;
    QPolygonF *hexagon;
    hexType type;
    QVector<Vertix*> vertixes;

};

#endif // HEX_H
