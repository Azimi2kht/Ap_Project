#ifndef DEVELOPMENT_H
#define DEVELOPMENT_H
#include"card.h"
#include"resource.h"

struct TypeCost{
    Resource Type[5];
    int count;
};

class Development:public Card
{
public:
    Development();
private:
    TypeCost cost;
};

#endif // DEVELOPMENT_H
