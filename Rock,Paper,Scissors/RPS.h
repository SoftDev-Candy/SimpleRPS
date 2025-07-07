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

	void RandomChoice();
	void StartGame()const;
	
	int GetScoreArray(int index)const;
	void SetScoreArray(int index , int addedElement);
	int Getmoves()const;
	void SetMoves(int numMoves);
	void PrintWin()const;
	void PrintLose()const;
	int GetuserInput()const;
	void SetuserInput(int input);

};
