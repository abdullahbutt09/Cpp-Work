#include <iostream>
using namespace std;

struct bank_customers
{
    string user_name = "abdullah"; // available user
    string password = "12345";     // available password
};

void logins(bank_customers &customer)
{
    cout << endl;
    string name, password;

    cout << endl;
    cout << "-------------------> WELCOME TO BANK OF AMERICA <-------------------"
         << endl;
    cout << endl;

    cout << "Enter your user name :: ";
    cin >> name;

    cout << "Enter your password :: ";
    cin >> password;
    cout << endl;

    while (customer.user_name != name || customer.password != password)
    {
        cout << "Invalid user name and password!" << endl;
        cout << endl;

        cout << "Please enter your user name :: ";
        cin >> name;
        cout << "Please enter your password :: ";
        cin >> password;
        cout << endl;
    }

    cout << "Welcome " << customer.user_name << endl;
}

int bank_function(int current_balance)
{
    cout << endl;
    cout << "|-------------------------------------------------------------------"
            "----|"
         << endl;
    cout << "|                                                                   "
            "    |"
         << endl;
    cout << "|---------------> PRESS 1 TO CHECK YOUR ACCOUNT BALANCE "
            "<---------------|"
         << endl;
    cout << "|---------------> PRESS 2 TO DEPOSIT MONEY IN YOUR ACCOUNT "
            "<------------|"
         << endl;
    cout << "|---------------> PRESS 3 TO TRANSFER MONEY TO A ACCOUNT "
            "<--------------|"
         << endl;
    cout << "|---------------> PRESS 4 TO TAKE YOUR CARD BACK "
            "<----------------------|"
         << endl;
    cout << "|                                                                   "
            "    |"
         << endl;
    cout << "|-------------------------------------------------------------------"
            "----|"
         << endl;

    int choice;
    cout << endl;
    cout << "Enter your choice :: ";
    cin >> choice;

    while (choice != 1 && choice != 2 && choice != 3 && choice != 4)
    {
        cout << endl;
        cout << "Invalid choice!" << endl;
        cout << endl;
        cout << "Enter your choice between 1 , 2 , 3 , 4 :: ";
        cin >> choice;
    }

    if (choice == 1)
    {
        cout << "Your current balance is :: " << current_balance << endl;
    }
    else if (choice == 2)
    {
        int deposit;
        cout << "Your current balance is :: " << current_balance << endl;
        cout << "How much money you want to deposit :: ";
        cin >> deposit;
        current_balance += deposit;
        cout << deposit << "rs has been added to your account. Your new balance is :: " << current_balance << endl;
    }
    else if (choice == 3)
    {
        int amount;
        cout << "Your current balance is :: " << current_balance << endl;
        cout << "How much money you want to transfer :: ";
        cin >> amount;
        while (amount < 0)
        {
            cout << "Enter a valid amount to proceed :: ";
            cin >> amount;
        }
        while (amount > current_balance)
        {
            cout << "Insufficient balance" << endl;
            cout << "Your current balance is :: " << current_balance << endl;
            cout << "Kindly enter the transfer amount within your current balance :: ";
            cin >> amount;
        }
        current_balance -= amount;
        cout << amount << "rs has been transferred to the beneficiary account. Your new balance is :: " << current_balance << endl;
    }

    return current_balance;
}

int main()
{
    bank_customers customer;
    logins(customer);
    int current_balance = 1000;

    while (true)
    {
        current_balance = bank_function(current_balance);

        string check_other;
        cout << endl;
        cout << "Would you like to perform any other action? yes/no y/n :: ";
        cin >> check_other;
        if (check_other == "no" || check_other == "n")
        {
            cout << "Thank you for using BANK OF AMERICA. Stay blessed." << endl;
            break;
        }
    }

    return 0;
}
