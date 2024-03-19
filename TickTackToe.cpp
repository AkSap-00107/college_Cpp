#include <iostream>
#include <ctime>
using namespace std;

auto matrix(auto *spaces)
{
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << endl;
    cout << "     |     |     " << endl;
}
auto playerMove(auto *spaces, auto player)
{
    int n;
    do
    {
        cout << "Enter your pos (1-9): ";
        cin >> n;
        if (n > 0 && n <= 9 && spaces[n - 1] == ' ')
        {
            spaces[n - 1] = player;
            matrix(spaces);
            break;
        }
    } while (true);
}
auto machineMove(auto *spaces, auto machine)
{
    int n;
    do
    {
        srand(time(0));
        n = rand() % 9;
        if (spaces[n] == ' ')
        {
            spaces[n] = machine;
            matrix(spaces);
            break;
        }
    } while (true);
}
auto checkWinner(auto *spaces, auto player)
{
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[2] == player ? cout << "Player Is Winner!" : cout << "Machine Is Winner!";
        return 1;
    }
    return 0;
}
auto gameDraw(auto *spaces)
{
    for (size_t i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
            return 0;
    }
    cout << "GAME DRAW..!";
    return 1;
}
int main()
{
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char machine = 'O';
    auto running = true;
    do
    {
        matrix(spaces);
        playerMove(spaces, player);
        if (checkWinner(spaces, player))
            break;
        if (gameDraw(spaces))
            break;
        machineMove(spaces, machine);
        if (checkWinner(spaces, player))
            break;
        if (gameDraw(spaces))
            break;
    } while (running);

    return 0;
}