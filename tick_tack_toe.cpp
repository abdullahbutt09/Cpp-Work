#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void DrawBoard(char *);
void playerturn(char *, char);
void computerturn(char *, char);
bool checkwinner(char *, char, char);
bool checktie(char *);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char Me = 'H';
    char computer = 'C';
    bool condition = true;

    DrawBoard(spaces);

    while (condition)
    {
        playerturn(spaces, Me);
        DrawBoard(spaces);

        if (checkwinner(spaces, Me, computer))
        {
            condition = false;
            break;
        }

        else if (checktie(spaces))
        {
            condition = false;
            break;
        }

        computerturn(spaces, computer);
        DrawBoard(spaces);

        if (checkwinner(spaces, Me, computer))
        {
            condition = false;
            break;
        }

        else if (checktie(spaces))
        {
            condition = false;
            break;
        }
    }
    cout << endl;
    cout << "**************** THANKS FOR PLAYING **************** " << endl;
    cout << endl;

    return 0;
}

void DrawBoard(char *spaces)
{
    cout << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  " << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  " << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void playerturn(char *spaces, char player)
{
    int number;
    do
    {
        cout << "ENTER A SPOT TO PLACE A MARKER (1-9) :: ";
        cin >> number;
        number--;
        // while (spaces[number] != ' ')
        // {
        //     cout << "THAT SPOT! IS TAKEN" << endl;
        //     cout << "PLEASE CHOOSE ANY OTHER SPOT! :: ";
        //     cin >> number;
        //     number--;
        // }

        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }

    } while (number > 0 || number < 9);
}

void computerturn(char *spaces, char computer)
{
    srand(time(0));

    int number;

    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}

bool checkwinner(char *spaces, char player, char computer)
{

    // 1st row
    if ((spaces[0] != ' ') && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        if (spaces[0] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }

    // 2nd row
    else if ((spaces[3] != ' ') && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        if (spaces[3] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }

    // 3rd row
    else if ((spaces[6] != ' ') && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        if (spaces[6] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }

    // ROWS COMPLETE // NOW COLUMNS
    // 1ST COLUMN
    else if ((spaces[0] != ' ') && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        if (spaces[0] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }
    // 2ND COLUMN
    else if ((spaces[1] != ' ') && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        if (spaces[1] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }
    // 3RD COLUMN
    else if ((spaces[2] != ' ') && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        if (spaces[2] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }

    // COLUMNS COMPLETE

    // NOW DIAGONAL TURN
    // DIAGONAL OF 0 4 8
    else if ((spaces[0] != ' ') && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        if (spaces[0] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }
    // DIAGONAL OF 2 4 6
    else if ((spaces[2] != ' ') && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        if (spaces[2] == player)
        {
            cout << "YOU WIN!" << endl;
        }

        else
        {
            cout << "YOU LOSE!" << endl;
        }
    }
    // DIAGONAL END!
    else
    {
        return false;
    }

    return true;
}

bool checktie(char *spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
        {
            return false;
        }
    }

    cout << "TIE!" << endl;
    return true;
}