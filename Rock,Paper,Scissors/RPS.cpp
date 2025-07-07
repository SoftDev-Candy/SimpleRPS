#include<iostream>
#include<vector>
#include<ctime>
#include"RPS.h"

void RPS::RandomChoice()
{
	static std::vector<std::string>drawHands = 
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
  
    const int randomNum = std::rand() % drawHands.size(); //I think the math might be Wrong maybe (max-min)+min or well i am stupid AHHH just mod by array size lol
    
    if (userInput == randomNum) 
    {
        std::cout << "oooooooo thats a draw ! Go again ! " << std::endl;
        Moves++;
    }


    
    std::cout << drawHands[randomNum];
}

void RPS::StartGame()const
{
	//TODO : Print StartGame Text . 
	std::cout << "This is Rock Paper Scissors\n";
	std::cout << "Use numbers 1,2 and 3 To make your choice \n";
	//Add more later 
}


int RPS::GetScoreArray(int index)const
{
    if (index >= 0 && index <= 2) 
    {
        return scoreArray[index];
    }
    else
    {
        std::cout << "Wrong input in GetScore Array , Array out of bounds." << std::endl;;
    }
}

void RPS::SetScoreArray(int index, int addedElement)
{
    if (index >= 0 && index <= 2)
    {
     scoreArray[index] == addedElement;
    }
}


int RPS::Getmoves()const
{
    return Moves;
}

void RPS::SetMoves(int numMoves)
{
    Moves = numMoves;
}

void RPS::PrintWin()const
{
	std::cout << "You Win !!!" << std::endl;
}

void RPS::PrintLose()const
{
	std::cout << "You lose !!!" << std::endl;
}

int RPS::GetuserInput() const
{
    return userInput;
}

void RPS::SetuserInput(int input)
{
    userInput = input;
}


