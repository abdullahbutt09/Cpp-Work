#include <iostream>
#include <conio.h> // For _getch() function
using namespace std;

void hidePasswordInput()
{
    string password;
    char ch;

    cout << "Enter your password: ";

    while ((ch = getch()) != '\r')
    { // Enter key is '\r'
        if (ch == '\b')
        { // Handle backspace
            if (!password.empty())
            {
                cout << "\b \b"; // Erase the last '*'
                password.pop_back();
            }
        }
        else
        {
            password += ch;
            cout << '*'; // Print '*' for each character entered
        }
    }
    cout << endl;
    cout << "Password entered: " << password << endl;
}

int main()
{
    hidePasswordInput();
    return 0;
}
