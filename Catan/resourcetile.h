#ifndef RESOURCETILE_H
#define RESOURCETILE_H

#include "tiles.h"

class ResourceTile : public Tiles
{
private:
    int chance;
    int access_permition[6];
// Resource resource_type;

public:
    ResourceTile();
};

#endif // RESOURCETILE_H
