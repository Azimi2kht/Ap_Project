#ifndef RESOURCE_H
#define RESOURCE_H
#include "card.h"

enum ResourceType {
        RT_Wood, RT_Brick, RT_Rock, RT_Wheat, RT_Sheep
};

class Resource: public Card
{
public:
    Resource();
    Resource* create_obj(ResourceType type);
};

#endif // RESOURCE_H



