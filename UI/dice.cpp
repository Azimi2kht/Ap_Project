#include "dice.h"

Dice::Dice()
{

}

int Dice::GenerateValue(){
	srand(time(0));
	
	int dice1 = (int)(1 + rand() % 6);
	int dice2 = (int)(1 + rand() % 6);
	
	Value = dice1 + dice2;
	
	return Value;
}
