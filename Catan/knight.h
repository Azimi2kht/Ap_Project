#ifndef KNIGHT_H
#define KNIGHT_H
#include"development.h"
#include"thief.h"

class Knight:public Development
{
public:
    Knight();
    void RelocateThief(Thief &L,float _x, float _y);
};

#endif // KNIGHT_H
