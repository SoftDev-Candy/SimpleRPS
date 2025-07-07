#include<iostream>
#include<vector>
#include<ctime>
#include"RPS.h"

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
void RPS::RandomChoice()
{
	
  
    const int randomNum = std::rand() % drawHands.size(); //I think the math might be Wrong maybe (max-min)+min or well i am stupid AHHH just mod by array size lol
    
    std::cout << "The Computer showed " << drawHands[randomNum] << std::endl;
    std::cout << "You showed " << drawHands[userInput] << std::endl;
    if (userInput == randomNum) 
    {
        std::cout << "oooooooo thats a draw ! Go again ! " << std::endl;
        Moves--;
    }
    else 
    {
    //call the check function.
        CheckWin(randomNum, userInput);
    }
}

void RPS::StartGame()const
{
	//TODO : Print StartGame Text . 
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
	//Add more later 

    std::cout << "Enter the number of rounds you want to play ->";
}

void RPS::EndGame() const
{
    std::cout << "The Game comes to an EnD" << std::endl;
    compareScores(scoreArray[0], scoreArray[1]);
}

void RPS::CheckWin(int compNum, int PlayerInput)
{
    if ((compNum == 0 && PlayerInput == 1)|| 
        (compNum == 1 && PlayerInput == 2)||
        (compNum == 2 && PlayerInput == 0))
    {
        //User wins condition
        std::cout << "Player wins this round" << std::endl;
        scoreArray[1] += 1;
        Moves--;
    }
    else
    {
        //Comp win condition
        std::cout << "Computer win this round" << std::endl;
        scoreArray[0] += 1;
        Moves--;
    }

    std::cout<<"Score" << std::endl;
    std::cout<<"Computer -> "<<scoreArray[0]<< std::endl;
    std::cout <<"Player -> " << scoreArray[1] << std::endl;

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
    return -1;
}

void RPS::SetScoreArray(int index, int addedElement)
{
    if (index >= 0 && index <= 2)
    {
     scoreArray[index] = addedElement;
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

int RPS::GetValidInput(int input)
{
    while (input < 0 || input > 2)
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input not valid ! Retry input from 0 to 2" << std::endl;
        std::cin >> input;
    }
    return input;
}

void RPS::compareScores(int compScore, int userScore) const
{
    if (compScore == userScore)PrintDraw();
    if (compScore < userScore) PrintWin();
    else PrintLose();
  

}

int RPS::GetuserInput() const
{
    return userInput;
}

void RPS::SetuserInput(int input)
{
    userInput = input;
}


