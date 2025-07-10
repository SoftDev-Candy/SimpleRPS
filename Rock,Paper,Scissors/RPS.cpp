#include<iostream>
#include<vector>
#include<ctime> 
#include<limits>
#include"RPS.h"

void RPS::HandleCompMove()
{
    compInput = std::rand() % drawHands.size();
}

void RPS::StartGame()
{
	std::cout << "This is Rock Paper Scissors\n";
	std::cout << "Use numbers 0,1 or 2 To make your make a valid move \n"; 
    std::cout << std::endl;

    std::cout << "0 is Rock" << std::endl;
    std::cout << "\n";
    std::cout << drawHands[0];
    std::cout << std::endl;

    std::cout << "1 is Paper" << std::endl;
    std::cout << "\n";
    std::cout << drawHands[1];
    std::cout << std::endl;

    std::cout << "2 is Scissors" << std::endl;
    std::cout << "\n";
    std::cout << drawHands[2];
    std::cout << std::endl;

    std::cout << "Enter the number of rounds you want to play ->";
    std::cin >> moves;
}

void RPS::EndGame() const
{
    std::cout << "The Game comes to an EnD" << std::endl;
    CompareScores(scoreArray[0], scoreArray[1]);
}

void RPS::CheckWin()
{
    std::cout << "The Computer showed " << drawHands[compInput] << std::endl;
    std::cout << "You showed " << drawHands[userInput] << std::endl;

    if (userInput == compInput)
    {
        std::cout << "oooooooo thats a draw ! Go again ! " << std::endl;
        moves--;
    }
    else if ((compInput == 0 && userInput == 1) ||
        (compInput == 1 && userInput == 2) ||
        (compInput == 2 && userInput == 0))
    {
        //User wins condition
        std::cout << "Player wins this round" << std::endl;
        scoreArray[1] += 1;
        moves--;
    }
    else
    {
        //Comp win condition
        std::cout << "Computer win this round" << std::endl;
        scoreArray[0] += 1;
        moves--;
    }

    std::cout<<"Score" << std::endl;
    std::cout<<"Computer -> "<<scoreArray[0]<< std::endl;
    std::cout <<"Player -> " << scoreArray[1] << std::endl;
}

void RPS::PrintWin()const
{
	std::cout << "You Win,Computer loses !!!" << std::endl;
}

void RPS::PrintLose()const
{
	std::cout << "You lose,Computer wins!!!" << std::endl;
}

void RPS::PrintDraw() const
{
    std::cout << "OH Its a Draw!!!" << std::endl;

}

void RPS::HandlePlayerInput()
{
    int playerInput{ 0 };
    std::cout << "Enter your move ->";
	std::cin >> playerInput;

    while (playerInput < 0 || playerInput > 2)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input not valid ! Retry input from 0 to 2" << std::endl;
        std::cin >> playerInput;
    }

    userInput = playerInput;
}

void RPS::CompareScores(int compScore, int userScore) const
{
    if (compScore == userScore)
    {
        PrintDraw();
    }
    else if (compScore < userScore)
    {
        PrintWin();
    }
    else
    {
        PrintLose();
    }
}

void RPS::PlayGame()
{
    StartGame();

    for (; moves >= 0; moves--) 
    {
        HandlePlayerInput();
        HandleCompMove();
        CheckWin();
    }

    EndGame();
}



