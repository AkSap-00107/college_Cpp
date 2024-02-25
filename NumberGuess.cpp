#include <iostream>
#include <ctime>

int main()
{
    int randNum;
    int guessNum;
    const int CHANCE = 6;

    srand(time(0));
    randNum = rand() % 10 + 1;
    std::cout<<"*******************NUMBER GUESSING GAME********************"<<std::endl;
    for (int i = 1; i <= CHANCE; i++)
    {
        std::cout << "\n This is chance: " << i << " Out Of 6 Enter Your Guuess(1-10):";
        std::cin >> guessNum;
        if (guessNum == randNum)
        {
            std::cout << "You Got it.";
            break;
        }
        else if (i == 6)
            std::cout << "Unfortune !You loose";
        else
            std::cout << "Better luck next time.";
    }
    return 0;
}