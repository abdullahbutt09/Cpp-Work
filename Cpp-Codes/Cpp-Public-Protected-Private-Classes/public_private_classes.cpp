#include <iostream>
using namespace std;

class myclass1
{
private:
    string cnic_number;
    string phone_number;
    string credit_card_number;

public:
    string name;
    string scale;
    string email;
    int age;
    string skills;

    void setdata(string cnumber, string pnumber, string cardnumber);

    void getdata()
    {
        cout << endl;
        cout << "Enter the name of the person: ";
        getline(cin, name);

        cout << "Enter the scale of the person: ";
        getline(cin, scale);

        cout << "Enter the email of the person: ";
        getline(cin, email);

        cout << "Enter the age of the person: ";
        cin >> age;
        cin.ignore();

        cout << "Enter the skills of the person: ";
        getline(cin, skills);

        cout << endl;
        cout << "-----------> Data collected <----------------" << endl;
        cout << endl;
        cout << "Name: " << name << endl;
        cout << "Scale: " << scale << endl;
        cout << "Email: " << email << endl;
        cout << "Age: " << age << endl;
        cout << "Skills: " << skills << endl;
        cout << "CNIC Number: " << cnic_number << endl;
        cout << "Phone Number: " << phone_number << endl;
        cout << "Credit Card Number: " << credit_card_number << endl;
        cout << endl;
        cout << "------------------------------------------------" << endl;
    }
};

void myclass1 ::setdata(string cnumber, string pnumber, string cardnumber)
{
    cnic_number = cnumber;
    phone_number = pnumber;
    credit_card_number = cardnumber;
}

int main()
{
    myclass1 object;

    object.setdata("331026987456", "0300-9933441", "551028484875");

    object.getdata();
    return 0;
}

//--> By default class members are private
//--> A function can be used inside a function called nested function
//--> Variables Objects as well as functions can also be made private or public if private then the user cannnot directly call the object variable function within the main function the specific variable function object should be called within its classes syntax!