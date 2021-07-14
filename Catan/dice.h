#ifndef DICE_H
#define DICE_H

#include <cstdlib>
#include <ctime>

class Dice
{
public:
    static int GenerateValue();
	
private:
	int Value;
};

#endif // DICE_H
