/*                          SINGLE INHERITENCE
 */
#include <iostream>
using namespace std;

class company
{
private:
    string employee_cnic;

public:
    string name_of_employee;
    float salary;
    int age;
    string designation;

    void setdata()
    {
        cout << "Enter the name of the employee: ";
        cin >> name_of_employee;
        cout << "Enter the CNIC of the employee: ";
        cin >> employee_cnic;
        cout << "Enter the salary of the employee: ";
        cin >> salary;
        cout << "Enter the age of the employee: ";
        cin >> age;
        cout << "Enter the designation of the employee: ";
        cin >> designation;
    }

    void getdata()
    {
        cout << endl;
        cout << "Name of the employee: " << name_of_employee << endl;
        cout << "CNIC of the employee: " << employee_cnic << endl;
        cout << "Salary of the employee: " << salary << endl;
        cout << "Age of the employee: " << age << endl;
        cout << "Designation of the employee: " << designation << endl;
    }
};

class programmers : public company
{
private:
    string programmer_id;

public:
    string language_experties;
    string programming_experience;
    void setdata()
    {
        company::setdata();
        cout << "Enter the id of the programmer: ";
        cin >> programmer_id;
        cin.ignore();
        cout << "Enter the programming experience of the programmer: ";
        getline(cin, programming_experience);
        cout << "Enter the language experties of the programmer: ";
        getline(cin, language_experties);
    }
    void getdata()
    {
        company::getdata();
        cout << "ID of the programmer: " << programmer_id << endl;
        cout << "Programming experience of the programmer: " << programming_experience << endl;
        cout << "Language experties of the programmer: " << language_experties << endl;
        cout << endl;
    }
};

int main()
{
    programmers p1;
    p1.setdata();
    p1.getdata();
    return 0;
}

// BASIE CODE FOR UNDERSTANDING

// class Base
// {
// private:
//     int data1;

// public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };

// void Base::setdata()
// {
//     data1 = 10;
//     data2 = 20;
// }

// int Base::getdata1()
// {
//     return data1;
// }

// int Base::getdata2()
// {
//     return data2;
// }

// class Derived : public Base
// {
//     int data3;

// public:
//     void process();
//     void display();
// };

// void Derived::process()
// {
//     data3 = data2 * getdata1();
// }

// void Derived::display()
// {
//     cout << "Data1: " << getdata1() << endl;
//     cout << "Data2: " << data2 << endl;
//     cout << "Data3: " << data3 << endl;
// }
// int main()
// {
//     cout << endl;
//     Derived der;
//     der.setdata();
//     der.process();
//     der.display();
//     cout << endl;