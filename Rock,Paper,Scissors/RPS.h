#pragma once
class RPS
{

private:
	int maxValues;//I dont know what to name this variable.
	int scoreArray[2];
	int Moves;//Can be infinte and we can keep track of the scores/;

public:
	RPS() 
	{
		maxValues = 0;
		Moves = 0;
		for (int i =0;i<2;i++)
		{ 
			scoreArray[i] = 0;
		}
	}

	void RandomChoice();

	void StartGame();

	int	GetmaxValues();
	void SetMaxValues(int value);

	void PrintWin();
	void PrintLose();

};
