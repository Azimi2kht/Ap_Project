#ifndef MATCH_H
#define MATCH_H

#include "player.h"

class Match
{
public:
    Match();
    Player *getPlayer() { return player;}

private:
    Player *player;

};

#endif // MATCH_H
