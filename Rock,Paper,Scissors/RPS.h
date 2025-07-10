#pragma once
#include <vector>
#include <string>

class RPS
{

private:
	int scoreArray[2] = {0};
	int moves = 0;//Can be infinte and we can keep track of the scores/;
	int userInput = 0;
	int compInput = 0;

	std::vector<std::string> drawHands
	{
		R"(
			_______
		---'   ____)
			  (_____)
			  (_____)
			  (____)
		---.__(___)
		)",
		R"(
			_______
		---'   ____)____
				  ______)
				  _______)
				 _______)
		---.__________)
		)",
		R"(
			_______
		---'   ____)____
			  __________)
			  ___________)
			 (____)
		---.__(___)
		)"
	};

public:
	void HandleCompMove();//Gives a random input for the computer//
	void StartGame();
	void EndGame()const;

	//Check who won the player or the computer in that round//
	void CheckWin();

	//Print win and lose condition also draw//
	void PrintWin()const;
	void PrintLose()const;
	void PrintDraw()const;

	//Validate input//
	void HandlePlayerInput();
	
	void CompareScores(int compScore, int userScore)const;
	//Contains the main game loop//
	void PlayGame();
};
