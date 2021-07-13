#ifndef HEXBOARD_H
#define HEXBOARD_H

#include <QList>
#include <QDebug>
#include "hex.h"

class HexBoard {
public:
    // constructors
    HexBoard();

    // getters/setters
    QList<Hex*> getHexes();

    // public methods
    void placeHexes(int x, int y, int numberOfRows, int numberOfColumns);
    Hex* createSetHex(int x, int y, hexType type);

private:
    QList<Hex*> hexes;
    void createHexRow(int x, int y, int numOfColumns);
    QString getPicture(hexType);




};

#endif // HEXBOARD_H
