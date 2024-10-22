#include <iostream>
using namespace std;

int main()
{
    int balance;
    int toy_price = 1000;

    cout << "Enter your current balance: ";
    cin >> balance;

    try
    {
        if (balance >= 1000)
        {
            cout << "You can buy this toy!" << endl;
            balance -= toy_price;
            cout << "Your remaining balance is: $" << balance << endl;
        }
        else
        {
            throw balance;
        }
    }
    catch (int d)
    {
        cout << "Insufficient funds. Your current balance is: $" << d << endl;
        cout << "You need $" << toy_price - d << " more." << endl;
    }
    catch (...)
    {
        cout << "An unexpected error occurred." << endl;
    }
    return 0;
}