#include <iostream>
using namespace std;
int main()
{
    // 1st loop
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 9 - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // 2nd loop

    for (int i = 8; i >= 1; i--)
    {
        for (int j = 2; j <= i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= 9 - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}