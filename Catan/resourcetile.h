#ifndef RESOURCETILE_H
#define RESOURCETILE_H

#include "tiles.h"

class ResourceTile : public Tiles
{
private:
    int chance;
    int access_permition[NUM_OF_SIDE];
// Resource resource_type;

public:
    ResourceTile();
};

#endif // RESOURCETILE_H
