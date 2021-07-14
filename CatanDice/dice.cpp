#include "dice.h"

Dice::Dice()
{

}

int GenerateValue(){
    int val;
    srand(time(0));
        int dice1 = (int)(1 + rand() % 6);
        int dice2 = (int)(1 + rand() % 6);
        val = dice1 + dice2;
        return val;
}
