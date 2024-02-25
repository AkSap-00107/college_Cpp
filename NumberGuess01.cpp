#include <iostream>
#include <ctime>

int main()
{
    int randNum;
    int guessNum;
    int tries = 0;

    srand(time(0));
    randNum = rand() % 100 + 1;
    std::cout << "*******************NUMBER GUESSING GAME********************" << std::endl;
    do
    {
        std::cout << "\n Enter your Guess(1-100):";
        std::cin >> guessNum;
        tries++;
        if (guessNum > randNum)
            std::cout << "\n its too high!";
        else if (guessNum < randNum)
            std::cout << "\n its too low!";
        else
            std::cout << "\n you got it in " << tries << " tries";

    } while (randNum != guessNum);

    return 0;
}