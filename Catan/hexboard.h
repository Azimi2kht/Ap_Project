#ifndef HEXBOARD_H
#define HEXBOARD_H

#include <QList>
#include <QDebug>
#include <iostream>
#include <fstream>
#include "hex.h"

class HexBoard {
public:
    // constructors
    HexBoard();

    // getters/setters
    QList<Hex*> getHexes();

    // public methods
    void placeHexes();
    Hex* createSetHex(int x, int y, hexType type);

private:
    QList<Hex*> hexes;
    void createHexRow(int x, int y, int numOfColumns);
    QString getPicture(hexType);

};

template<typename T>
QVector<T> randomItems(QVector<T> iv) {
    // variables
    int size = iv.size();

    // set the rand seed
    srand(time(0));

    while (size > 1) {
        int index = rand() % size;
        std::swap(iv[index], iv[size - 1]);
        size--;
    }
    return iv;
}


#endif // HEXBOARD_H
