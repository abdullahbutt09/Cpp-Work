#include <iostream>
using namespace std;

class person
{
protected:
    int id[10];
    string name[10];
    string address[10];

public:
    person()
    {
        id[0] = 0;
        name[0] = " ";
        address[0] = " ";
    }

    void GetData()
    {
        for (int i = 0; i < 1; i++)
        {
            cout << "Enter Your Name :";
            cin >> name[i];

            cout << "Enter Your ID :";
            cin >> id[i];
            cin.ignore();

            cout << "Enter Your Address :";
            getline(cin, address[i]);
        }
    }

    void ShowData()
    {
        for (int i = 0; i < 1; i++)
        {
            cout << "Name : " << name[i] << endl;
            cout << "ID : " << id[i] << endl;
            cout << "Address : " << address[i] << endl;
        }
    }
};

class student : public person
{
protected:
    int RegistrationNumber[10];
    int marks[10];

public:
    student()
    {
        RegistrationNumber[0] = 0;
        marks[0] = 0;
    }
    void InputData()
    {
        person ::GetData();
        for (int i = 0; i < 1; i++)
        {
            cout << "Enter Your Registration Number :";
            cin >> RegistrationNumber[i];
        }
        for (int i = 0; i < 1; i++)
        {
            cout << "Enter Your Marks :";
            cin >> marks[i];
        }
    }
    void PrintData()
    {
        for (int i = 0; i < 1; i++)
        {
            person ::ShowData();
            cout << "Registration Number : " << RegistrationNumber[i] << endl;
            cout << "Marks : " << marks[i] << endl;
        }
    }
};

class Scholarship : public student
{
protected:
    string ScholarShipName[10];
    int ScholarshipAmount[10];

public:
    Scholarship()
    {
        ScholarshipAmount[0] = 0;
        ScholarShipName[0] = "";
    }
    void InputScholarshipData()
    {
        student ::InputData();
        for (int i = 0; i < 1; i++)
        {
            cin.ignore();
            cout << "Enter Your Scholarship Name :";
            getline(cin, ScholarShipName[i]);
        }
        for (int i = 0; i < 1; i++)
        {
            cout << "Enter Your Scholarship Amount :";
            cin >> ScholarshipAmount[i];
        }
    }

    void PrintAll()
    {
        for (int i = 0; i < 1; i++)
        {
            cout << endl;
            student ::PrintData();
            cout << "Scholarship Name : " << ScholarShipName[i] << endl;
            cout << "Scholarship Amount : " << ScholarshipAmount[i] << endl;
            cout << endl;
        }
    }
};

int main()
{
    cout << endl;
    Scholarship p;
    p.InputScholarshipData();
    p.PrintAll();
    return 0;
} 