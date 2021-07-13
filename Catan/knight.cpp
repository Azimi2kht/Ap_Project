#include "knight.h"

Knight::Knight()
{

}

void Knight::RelocateThief(Thief &L,float _x, float _y)
{
   L.setLocation(_x,_y);
}
