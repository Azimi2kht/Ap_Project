#ifndef MAP_H
#define MAP_H

#define NUM_OF_TILES_VER 10
#define NUM_OF_TILES_HOR 10

#include <tiles.h>

class Map
{
private:
    Tiles coordinates[NUM_OF_TILES_HOR][NUM_OF_TILES_VER];
    bool check_validity();

public:
    Map();
    void createMap();

};

#endif // MAP_H
