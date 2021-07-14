#ifndef SEATILE_H
#define SEATILE_H

#include "tiles.h"

class SeaTile : public Tiles
{
private:
    int connection_to_land_side[NUM_OF_SIDE];
    int connection_to_land_tip[NUM_OF_SIDE];

public:
    SeaTile();
};

#endif // SEATILE_H
