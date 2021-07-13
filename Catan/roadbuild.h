#ifndef ROADBUILD_H
#define ROADBUILD_H
#include"advance.h"
class RoadBuild:public Advance
{
public:
    RoadBuild();
    void AddRoadToPlayer(/*Player &p*/);
    const int num=2;
};

#endif // ROADBUILD_H
