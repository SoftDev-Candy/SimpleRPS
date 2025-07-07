#include<iostream>
#include"RPS.h"

int main()
{
	std::srand(static_cast<unsigned int>(std::time((0))));
	RPS obj1;
	obj1.RandomChoice();


	return 0;
}