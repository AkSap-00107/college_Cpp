#include <iostream>
#include <ctime>
using namespace std;
void LayOut(char *spaces);
void PlayerMove(char *spaces, char player);
void MachineMove(char *spaces, char machine);
bool CheckWinner(char *spaces, char player);
bool GameDraw(char *spaces);
int main()
{
    char spaces[] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char machine = 'O';
    bool running = true;
    LayOut(spaces);
    do
    {
        PlayerMove(spaces, player);
        LayOut(spaces);
        if (CheckWinner(spaces, player))
        {
            running = false;
            break;
        }
        if (GameDraw(spaces))
            break;
        MachineMove(spaces, machine);
        LayOut(spaces);
        if (CheckWinner(spaces, player))
        {
            running = false;
            break;
        }
        if (GameDraw(spaces))
            break;
    } while (running);
    return 0;
}
void LayOut(char *spaces)
{
    cout << "\n";
    cout << "     |     |     \n";
    cout << " " << spaces[0] << "   |  " << spaces[1] << "  |  " << spaces[2] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << " " << spaces[3] << "   |  " << spaces[4] << "  |  " << spaces[5] << "  \n";
    cout << "_____|_____|_____\n";
    cout << "     |     |     \n";
    cout << " " << spaces[6] << "   |  " << spaces[7] << "  |  " << spaces[8] << "  \n";
    cout << "     |     |     \n";
}
void PlayerMove(char *spaces, char player)
{
    int num;
    do
    {
        cout << "Enetr Your Pos(1-9)";
        cin >> num;
        num--;
        if (num >= 0 && num < 9 && spaces[num] == ' ')
        {
            spaces[num] = player;
            break;
        }
    } while (true);
}
void MachineMove(char *spaces, char machine)
{
    int num;
    while (true)
    {
        srand(time(0));
        num = rand() % 8;
        if (spaces[num] == ' ')
        {
            spaces[num] = machine;
            break;
        }
    }
}
bool CheckWinner(char *spaces, char player)
{
    // cout<<"\n AKAKSJSAKS";
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1]) && (spaces[1] == spaces[2]))
    {
        spaces[0] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4]) && (spaces[4] == spaces[5]))
    {
        spaces[3] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7]) && (spaces[7] == spaces[8]))
    {
        spaces[6] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3]) && (spaces[3] == spaces[6]))
    {
        spaces[0] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4]) && (spaces[4] == spaces[7]))
    {
        spaces[1] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5]) && (spaces[5] == spaces[8]))
    {
        spaces[2] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4]) && (spaces[4] == spaces[8]))
    {
        spaces[0] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4]) && (spaces[4] == spaces[6]))
    {
        spaces[2] == player ? cout << "You Are Winner!" : cout << "Machine Is Winner!";
        return true;
    }
    else
        return false;
}
bool GameDraw(char *spaces)
{
    int count = 0;
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
            count++;
    }
    if (count > 0)
        return false;
    cout << "\n Game Draw.....";
    return true;
}