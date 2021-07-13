#ifndef PIECE_H
#define PIECE_H
#include"resource.h"

struct TypeCost{
    Resource Type[5];
    int count;
};

class Piece
{
public:
    Piece();
    void placement(float x, float y);
private:
    int point;
    float xLocation;
    float yLocation;
    TypeCost cost;
};

#endif // PIECE_H
