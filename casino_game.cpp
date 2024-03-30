#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void rules()
{
    cout << endl;
    cout << "-----> RULES ARE AS FOLLOWS! <-----" << endl;
    cout << endl;
    cout << "1. YOU HAVE TO CHOOSE A NUMBER BETWEEN 1 TO 10" << endl;
    cout << "2. WINNER OF THE GAME GETS 10X OF HIS / HER AMOUNT  " << endl;
    cout << "3. IF YOU GUESS IN CORRECT YOU WON / IF YOUR GUESS IS IN-CORRECT YOU LOSE THE ENTIRE AMOUNT" << endl;
    cout << endl;
}

int main()
{
    string player_name;
    int balance;
    int betting_amount;
    int guess;
    int dice;
    char choice = 'y';

    srand(time(0));

    cout << endl;
    cout << "\t \t \t \t -----> WELCOME TO CASINO NUMBER GUESSING GAME <----- " << endl;
    cout << endl;

    cout << "ENTER YOUR NAME : ";
    getline(cin, player_name);

    cout << endl;
    cout << "ENTER YOUR BALANCE TO PLAY THE GAME $";
    cin >> balance;

    cout << endl;

    cout << "HEY" << player_name << " WELCOME TO THE CASINO BETTING NUMBER GUESSING GAME!" << endl;

    while (choice == 'y' || choice == 'Y')
    {
        rules();

        cout << "YOUR CURRENT BALANCE IS " << balance << "$" << endl;
        cout << endl;
        cout << "HOW MUCH BALANCE DO YOU WANT TO BET? $";
        cin >> betting_amount;

        while (betting_amount > balance)
        {
            cout << "BETTING AMOUNT CANNOT BE GREATER THEN CURRENT BALANCE" << endl;
            cout << endl;
            cout << "ENTER BETTING AMOUNT AGAIN $";
            cin >> betting_amount;
        }

        dice = rand() % 10 + 1;

        /*

        cout << endl;

        DICE NUMBER IS HERE!

        cout << dice << endl;

        ---> IN CASE YOU WANT TO CHECK THE DICE NUMBER BEFORE ENTERING THE GUESS NUMBER UN-COMMENT THE ABOVE CODE <---

        */

        cout << endl;

        cout << "GUESS ANY NUMBER BETWEEN 1 - 10 :: ";
        cin >> guess;

        while (guess <= 0 || guess > 10)
        {
            cout << endl;
            cout << "GUESS CANNOT BE GREATER THEN 10" << endl;
            cout << endl;
            cout << "ENTER GUESS AGAIN :: ";
            cin >> guess;
        }

        if (dice == guess)
        {
            cout << endl;
            cout << "CONGRATULATIONS YOU HAVE WON " << betting_amount * 10 << "$" << endl;
            balance = balance + betting_amount * 10;
        }

        else
        {
            cout << "YOU HAVE LOST " << betting_amount << "$" << endl;
            balance = balance - betting_amount;
        }

        cout << endl;
        cout << "THE WINNING NUMBER WAS " << dice << endl;
        cout << endl;
        cout << player_name << " YOUR NEW BALANCE IS " << balance << "$" << endl;
        cout << endl;

        cout << "DO YOU WANT TO PLAY AGAIN ? Y/N y/n :: ";
        cin >> choice;

        if (balance == 0)
        {
            cout << endl;
            cout << "YOU HAVE NO MONEY TO PLAY LOL!" << endl;
            break;
        }
    }
    cout << endl;
    cout << "THANKS FOR PLAYING THE GAME YOUR CURRENT BALANCE IS " << balance << "$" << endl;
    cout << endl;
    return 0;
}