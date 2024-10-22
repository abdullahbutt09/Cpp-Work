#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    char user_choice;
    char computer_choice;
    char choice = 'y';
    int user_score = 0;
    int computer_score = 0;

    cout << endl;
    cout << "------> ROCK PAPER SCISSORS GAME! <------" << endl;
    cout << endl;
    cout << "| ------------------------------------------ |" << endl;
    cout << "| ------>  'r' | 'R' FOR 'ROCK'     <------- |" << endl;
    cout << "| ------>  'p' | 'P' FOR 'PAPER'    <------- |" << endl;
    cout << "| ------>  's' | 'S' FOR 'SCISSORS' <------- |" << endl;
    cout << "| ------------------------------------------ |" << endl;

    while (choice != 'n' && choice != 'N')
    {
        cout << endl;
        cout << "ENTER YOUR CHOICE :: ";
        cin >> user_choice;

        while (user_choice != 'r' && user_choice != 'R' && user_choice != 'p' && user_choice != 'P' && user_choice != 'S' && user_choice != 's')
        {
            cout << "INVALID CHOICE!" << endl;
            cout << "ENTER YOUR CHOICE :";
            cin >> user_choice;
        }

        cout << endl;
        computer_choice = (rand() % 3) + 1;
        switch (computer_choice)
        {
        case 1:
            cout << "COMPUTER CHOICE IS ROCK" << endl;
            break;
        case 2:
            cout << "COMPUTER CHOICE IS PAPER" << endl;
            break;
        case 3:
            cout << "COMPUTER CHOICE SSCISSORS" << endl;
            break;
        }

        if (user_choice == 'r' || user_choice == 'R')
        {
            cout << "USER CHOICE IS ROCK" << endl;
            if (computer_choice == 1)
            {
                cout << "ITS A TIE!" << endl;
            }
            else if (computer_choice == 2)
            {
                cout << "YOU LOSE!" << endl;
                computer_score++;
            }
            else if (computer_choice == 3)
            {
                cout << "YOU WIN!" << endl;
                user_score++;
            }
        }

        if (user_choice == 'p' || user_choice == 'P')
        {
            cout << "USER CHOICE IS PAPER" << endl;
            if (computer_choice == 1)
            {
                cout << "YOU WIN!" << endl;
                user_score++;
            }
            else if (computer_choice == 2)
            {
                cout << "ITS A TIE!" << endl;
            }
            else if (computer_choice == 3)
            {
                cout << "YOU LOSE!" << endl;
                computer_score++;
            }
        }

        if (user_choice == 's' || user_choice == 'S')
        {
            cout << "USER CHOICE IS SCISSORS" << endl;
            if (computer_choice == 1)
            {
                cout << "YOU LOSE!" << endl;
                computer_score++;
            }
            else if (computer_choice == 2)
            {
                cout << "YOU WIN!" << endl;
                user_score++;
            }
            else if (computer_choice == 3)
            {
                cout << "ITS A TIE!" << endl;
            }
        }
        cout << endl;
        cout << "DO YOU WANT TO PLAY AGAIN (Y/N) :: ";
        cin >> choice;

        while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N')
        {
            cout << "Wrong choice!" << endl;
            cout << "DO YOU WANT TO PLAY AGAIN (Y/N) :: ";
            cin >> choice;
        }
    }
    cout << endl;
    cout << "THANKS FOR PLAYING!" << endl;
    cout << "YOUR SCORE IS " << user_score << endl;
    cout << "COMPUTER SCORE IS " << computer_score << endl;
    cout << endl;
    if (user_score > computer_score)
    {
        cout << "YOU WON!" << endl;
        cout << endl;
    }
    else if (user_score < computer_score)
    {
        cout << "YOU LOST!" << endl;
        cout << endl;
    }
    else if (user_score == computer_score)
    {
        cout << "ITS A TIE!" << endl;
        cout << endl;
    }

    return 0;
}