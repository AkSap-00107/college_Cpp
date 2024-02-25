#include <iostream>
#include <ctime>
int main()
{
    int num;
    srand(time(NULL));
    num = rand() % 5 + 1;
    switch (num)
    {
    case 1:
        std::cout << "You won the Catebary" << std::endl;
        break;
    case 2:
        std::cout << "You won the Chocolate" << std::endl;
        break;
    case 3:
        std::cout << "You won the KitKat" << std::endl;
        break;
    case 4:
        std::cout << "You won the DairyMilk" << std::endl;
        break;
    case 5:
        std::cout << "You won the IceCream" << std::endl;
        break;
    }
    return 0;
}