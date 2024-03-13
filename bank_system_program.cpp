#include <iostream>
using namespace std;

void logins()
{
  struct bank_costomers
  {
    string user_name = "abdullah"; // available user
    string password = "12345";     // available password
  };

  bank_costomers customer1;
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

  while (customer1.user_name != name || customer1.password != password)
  {

    cout << "Invalid user name and password!" << endl;
    cout << endl;

    cout << "Please enter your user name :: ";
    cin >> name;
    cout << "Please enter your password :: ";
    cin >> password;
    cout << endl;
  }

  cout << "Welcome " << customer1.user_name << endl;
}

void bank_function()
{

  struct bank_costomers
  {
    string user_name = "abdullah"; // available user
    string password = "12345";     // available password
  };

  bank_costomers customer1;

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

  int current_balance = 1000;

  int choice;
  cout << endl;
  cout << "Enter your choice :: ";
  cin >> choice;

  if (choice == 1)
  {
    cout << "Your current balance is :: " << current_balance << endl;
    string check_other;
    cout << "Would you like to perform any other action? yes/no y/n :: ";
    cin >> check_other;
    if (check_other == "yes" || check_other == "y")
    {
      bank_function();
    }

    else if (check_other == "no")
    {
      cout << "Thank you for using BANK OF AMERICA stay blessed";
      exit(0);
    }
  } // 1ST CHOICE ENDING

  else if (choice == 2)
  {
    int deposit;
    cout << "Your current balance is :: " << current_balance << endl;
    cout << "How much money you want to deposit :: ";
    cin >> deposit;

    while (deposit < 0)
    {
      cout << "Ente a valid amout to proceed :: ";
      cin >> deposit;
    }

    string paka;
    cout << "You want to desposit " << deposit << "rs "
         << "in your account? yes/no | y/s :: ";
    cin >> paka;

    string slip;
    cout << "Sir, would you like to print a slip? yes/no | y/n :: ";
    cin >> slip;

    if (slip == "yes" || slip == "y")
    {
      cout << endl;
      cout << "Slip is printing..." << endl;
      cout << "Your username is :: " << customer1.user_name << endl;
      cout << "Your password is :: " << customer1.password << endl;
      cout << "Your current balance is :: " << current_balance << endl;
      cout << "Your deposited amount is :: " << deposit << endl;
      cout << "Your new balance is :: " << current_balance + deposit << endl;
      cout << "Thank you for using BANK OF AMERICA stay blessed" << endl;
      cout << endl;
    }

    else if (slip == "no" || slip == "n")
    {
      cout << "Thank you for using BANK OF AMERICA stay blessed" << endl;
    }

    if (paka == "yes" || paka == "y")
    {
      cout << deposit
           << "rs has been added to your account your new balance is "
           << current_balance + deposit << "rs " << endl;
      string check_other;
      cout << endl;
      cout << "Would you like to perform any other action? yes/no y/n :: ";
      cin >> check_other;
      if (check_other == "yes" || check_other == "y")
      {
        bank_function();
      }

      else if (check_other == "no" || check_other == "n")
      {
        cout << "Thank you for using BANK OF AMERICA stay blessed";
        exit(0);
      }
    }
    else if (paka == "no" || paka == "n")
    {
      cout << "Deposit of amount " << deposit
           << "rs has been cancelled successfully" << endl;
      cout << endl;
      string check_other;
      cout << "Would you like to perform any other action? yes/no y/n :: ";
      cin >> check_other;
      if (check_other == "yes" || check_other == "y")
      {
        bank_function();
      }
      else if (check_other == "no" || check_other == "n")
      {
        cout << "Thank you for using BANK OF AMERICA stay blessed";
        exit(0);
      }
    }
  } // 2ND CHOICE ENDING

  else if (choice == 3)
  {
    int amount;
    cout << "Your current balance is :: " << current_balance << endl;
    cout << "How much money you want to transfer :: ";
    cin >> amount;
    while (amount < 0)
    {
      cout << "Ente a valid amout to proceed :: ";
      cin >> amount;
    }

    while (amount > current_balance)
    {
      cout << "Insufficient balance" << endl;
      cout << "Your current balance is :: " << current_balance << endl;
      cout
          << "Kindly enter the transfer amount within your current balance :: ";
      cin >> amount;
    }

    string paka;
    cout << "You want to transfer " << amount << "rs yes/n y/n :: ";
    cin >> paka;

    string slip;
    cout << "Sir, would you like to print a slip? yes/no | y/n :: ";
    cin >> slip;

    if (slip == "yes" || slip == "y")
    {
      cout << endl;
      cout << "Slip is printing..." << endl;
      cout << "Your username is :: " << customer1.user_name << endl;
      cout << "Your password is :: " << customer1.password << endl;
      cout << "Your current balance is :: " << current_balance << endl;
      cout << "Your transfer amount is :: " << amount << endl;
      cout << "Your new balance is :: " << current_balance - amount << endl;
      cout << "Thank you for using BANK OF AMERICA stay blessed" << endl;
      cout << endl;
    }

    else if (slip == "no" || slip == "n")
    {
      cout << "Thank you for using BANK OF AMERICA stay blessed" << endl;
    }

    if (paka == "yes" || paka == "y")
    {
      cout << amount
           << "rs has been transferred to the beneficary account and will be "
              "in its account in within 30 mins"
           << endl;

      cout << "Your new balance is :: " << current_balance - amount << endl;
      string check_other;
      cout << endl;
      cout << "Would you like to perform any other action? yes/no y/n :: ";
      cin >> check_other;
      if (check_other == "yes" || check_other == "y")
      {
        bank_function();
      }
      else if (check_other == "no" || check_other == "n")
      {
        cout << "Thank you for using BANK OF AMERICA stay blessed";
        exit(0);
      }
    }

    else if (paka == "no" || paka == "n")
    {
      cout << "Transaction cancelled successfully" << endl;
      string check_other;
      cout << "Would you like to perform any other action? yes/no y/n :: ";
      cout << endl;
      cin >> check_other;
      if (check_other == "yes" || check_other == "y")
      {
        bank_function();
      }
      else if (check_other == "no" || check_other == "n")
      {
        cout << "Thank you for using BANK OF AMERICA stay blessed";
        exit(0);
      }
    }
  } // 3RD CHOICE EDING

  else if (choice == 4)
  {
    cout << "Here yours card thanks for using Bank of America" << endl;
    string check_other;
    cout << "Would you like to perform any other action? yes/no y/n :: ";
    cin >> check_other;
    cout << endl;
    if (check_other == "yes" || check_other == "y")
    {
      bank_function();
    }
    else if (check_other == "no" || check_other == "n")
    {
      cout << "Thank you for using BANK OF AMERICA stay blessed";
      exit(0);
    }
  } // 4TH CHOICE ENDING
}
int main()
{
  logins();        // login page ready
  bank_function(); // bank function

  // receipt feature added !

  return 0;
}
