#ifndef TILES_H
#define TILES_H

#define NUM_OF_SIDE 6

class Tiles
{
private:
    char placement_permision_side[NUM_OF_SIDE];
    int placement_permision_tip[NUM_OF_SIDE];
    bool thief_presence;
    //PlayerBuilding building;

public:
    Tiles();

};

#endif // TILES_H
