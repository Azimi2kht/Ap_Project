#ifndef ADVANCE_H
#define ADVANCE_H
#include<string.h>
#include"development.h"

class Advance:public Development
{
public:
    Advance();
    void HolderSwap(/* Player &p */);
private:
    std::string holder;
};

#endif // ADVANCE_H
