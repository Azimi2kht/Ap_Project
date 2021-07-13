#ifndef HEX_H
#define HEX_H

#include <QGraphicsPolygonItem>
#include <QPointF>
#include <QVector>
#include <QImage>
#include <QBrush>
#include <QPen>

enum hexType {
    wheat, brick, rock, sheep, wood
};

class Hex : public QGraphicsPolygonItem {
public:
    // constructor
    Hex(hexType type, QGraphicsItem* parent = NULL);

    // getter/setter
    QPolygonF *getHexagon() {return hexagon;}
    QBrush *getBrush() {return brush;}

protected:
    QString owner;
    QImage *image;
    QBrush *brush;
    QPolygonF *hexagon;

    // privaet methods


};

#endif // HEX_H
