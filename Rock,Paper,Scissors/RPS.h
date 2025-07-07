#pragma once
class RPS
{

private:
	//int maxValues;//I dont know what to name this variable.its for the number of rps elements if i want to increase them later to  5 or someting else.
	int scoreArray[2];
	int Moves;//Can be infinte and we can keep track of the scores/;
	int userInput;

public:
	RPS() 
	{
		Moves = 0;
		for (int i =0;i<2;i++)
		{ 
			scoreArray[i] = 0;
		}	
		userInput = 0;
	}

	
	void RandomChoice();//Gives a random input for the computer and checks win draw condition//Also print the different hands

	void StartGame()const;
	void EndGame()const;

	//Check who won the player or the computer in that round//
	void CheckWin(int compNum, int PlayerInput);

	//To get and set score ...Tbf dont actually need them ngl....maybe getter//
	int GetScoreArray(int index)const;
	void SetScoreArray(int index , int addedElement);

	//Get & set dem user moves//
	int Getmoves()const;
	void SetMoves(int numMoves);

	//User input getter and setter//
	int GetuserInput()const;
	void SetuserInput(int input);

	//Print win and lose condition//
	void PrintWin()const;
	void PrintLose()const;
	void PrintDraw()const;

	//Validate input
	int GetValidInput(int input);

	void compareScores(int compScore, int userScore)const;

};
