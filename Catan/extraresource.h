#ifndef EXTRARESOURCE_H
#define EXTRARESOURCE_H
#include"advance.h"

class ExtraResource:public Advance
{
public:
    ExtraResource();
    void AddResourcesToPlayer();
    const int num=2;
};

#endif // EXTRARESOURCE_H
