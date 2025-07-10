#include<iostream>
#include"RPS.h"

int main()
{
	std::srand(static_cast<unsigned int>(std::time((0))));

	RPS game;
	game.PlayGame();

	return 0;
}