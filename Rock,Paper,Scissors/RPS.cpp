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

    std::srand(static_cast<unsigned int>(std::time((0))));
    int minValue = 0;
    int maxValue = 3;
    const int randomNum = std::rand() % drawHands.size(); //I think the math might be Wrong maybe (max-min)+min or well i am stupid AHHH 
    std::cout << drawHands[randomNum];
}

void RPS::StartGame()
{
	//TODO : Print StartGame Text . 
	std::cout << "This is Rock Paper Scissors\n";
	std::cout << "Use numbers 1,2 and 3 To make your choice \n";


	//Add more later 
}

int RPS::GetmaxValues()
{
	return RPS::maxValues;
}

void RPS::SetMaxValues(int value)
{
	maxValues = value;
}

void RPS::PrintWin()
{
	std::cout << "You Win !!!" << std::endl;
}

void RPS::PrintLose()
{
	std::cout << "You lose !!!" << std::endl;
}


