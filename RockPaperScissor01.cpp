#include <iostream>
#include <ctime>
void RockPaperScissor()
{
    std::string machineTurn;
    std::string myTurn;
    bool MeWin;
    srand(time(0));
    int num = rand() % 3 + 1;
    switch (num)
    {
    case 1:
        machineTurn = "Rock";
        break;
    case 2:
        machineTurn = "Paper";
        break;
    case 3:
        machineTurn = "Scissor";
        break;
    }
    std::cout << "Enter your Choice:";
    std::cin >> myTurn;
    if (myTurn == "Rock" || myTurn == "Paper" || myTurn == "Scissor")
    {
        if (machineTurn == myTurn)
        {
            std::cout << "\nGame Draw!";
            return;
        }
        else
        {
            if (myTurn == "Rock")
                MeWin = machineTurn == "Paper" ? false : true;
            else if (myTurn == "Paper")
                MeWin = machineTurn == "Scissor" ? false : true;
            else
                MeWin = machineTurn == "Rock" ? false : true;
        }
        if (MeWin)
            std::cout << "\nI am The Winner";
        else
            std::cout << "\nMachine is The Winner";
    }
    else
    std::cout << "Invalid Input..";
    return;
}
int main()
{
    RockPaperScissor();
    return 0;
}