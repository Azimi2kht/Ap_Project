#include "map.h"

Map::Map() {
    // initialize chanceNumbers
    // 3 ... 11
    for (int i = 3 ; i <= 11 ; i++) {
        for (int j = 0 ; j < 3 ; j++)
            chanceNumbers.push_back(i);
    }

    // 2
    for (int i = 0 ; i < 2 ; i++)
        chanceNumbers.push_back(2);

    // 12
    chanceNumbers.push_back(12);


    // randomize
    chanceNumbers = randomItems(chanceNumbers);

    // check for 6 & 8 ; TODO
}
