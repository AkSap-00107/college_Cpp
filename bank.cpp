#include <iostream>
# include<iomanip>

void showBalance(double &);
void withdraw(double &);
void deposite(double &);
void Account();
void Account()
{
    const int passKey = 2004;
    char request;
    char nextRequest = 'y';
    int num;
    double balance = 0;
    std::cout << "\nEnter your integer signature for verification:" << std::endl;
    std::cin >> num;
    if (num != passKey)
    {
        std::cout << "Invalid PassKey!";
        return;
    }
    else
    {
        while (nextRequest == 'y')
        {
            std::cout << "\nInput Your Request(Deposite-d/ShowBalance-s/Withdraw-w):" << std::endl;
            std::cin >> request;
            // std::cin.clear();
            // fflush(stdin);
            switch (request)
            {
            case 'd':
                deposite(balance);
                break;
            case 's':
                showBalance(balance);
                break;
            case 'w':
                withdraw(balance);
                break;

            default:
                std::cout << "\nInvalid Request";
                break;
            }
            std::cout << "\ndo you wanna next request(y/n):";
            std::cin >> nextRequest;
        }
    }
    return;
}

void showBalance(double &accountBalance)
{
    std::cout << "\nYour Current Balance: $"<<std::setprecision(2)<<std::fixed<< accountBalance;
}
void deposite(double &accountBalance)
{
    double newAdd;
    std::cout << "\nEnter Your Amount:";
    std::cin >> newAdd;
    accountBalance += newAdd;
    std::cout << "\nYour Amount added successfully!";
}
void withdraw(double &accountBalance)
{
    double withdrawAmount;
    std::cout << "\nEnter Your Amount:";
    std::cin >> withdrawAmount;
    if (withdrawAmount <= accountBalance)
    {
        accountBalance -= withdrawAmount;
        std::cout << "\nYour Amount withraw successfully!";
    }
    else
    {
        std::cout<<"\nAccount balance is Insufficient for your request.";
    }
}
int main()
{
    Account();
    return 0;
}
