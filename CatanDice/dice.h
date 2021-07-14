#ifndef DICE_H
#define DICE_H

#include <cstdlib>


#include <ctime>
class Dice
{
public:
    int Value;
    void GenerateValue() {
        srand(time(0));
        int dice1 = (int)(1 + rand() % 6);
        int dice2 = (int)(1 + rand() % 6);
        Value = dice1 + dice2;
    }
};

#endif // DICE_H
