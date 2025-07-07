#include<iostream>
#include"RPS.h"

int main()
{
	std::srand(static_cast<unsigned int>(std::time((0))));
	bool stopLoop = true;
	int playerInput { 0 };
	int roundsNum{ 0 };
	RPS game;
	game.StartGame();
	std::cin >> roundsNum;
	game.SetMoves(roundsNum);

	while (stopLoop) //Should switch from a bool flag to a if less than 0 round exit will show intent better 
	{
		std::cout << "Enter your move ->";
		std::cin >> playerInput;
		game.SetuserInput(game.GetValidInput(playerInput));

		game.RandomChoice();

		if (game.Getmoves()==0)//fixed moves should never be negative//
		{
			game.EndGame();
			stopLoop = false;
		}
		

	}


	return 0;
}