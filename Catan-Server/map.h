#ifndef MAP_H
#define MAP_H

#include <QVector>
#include <ctime>

class Map {
public:
    Map();

QVector<int> chanceNumbers;
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

#endif // MAP_H
