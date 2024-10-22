#include <iostream>
using namespace std;

class person
{
    int age;
    string name;

public:
    person()
    {
        age = 0;
        name = "Unknown";
    }
    void getdata()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void printdata()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class employee : virtual public person
{
    int emp_id;

public:
    void getdata()
    {
        person::getdata();
        cout << "Enter employee ID: ";
        cin >> emp_id;
    }

    void printdata()
    {
        person::printdata();
        cout << "Employee ID: " << emp_id << endl;
    }
};

class manager : virtual public person
{
    string department;

public:
    void getdata()
    {
        person::getdata();
        cout << "Enter department: ";
        cin >> department;
    }

    void printdata()
    {
        person::printdata();
        cout << "Department: " << department << endl;
    }
};

class manager_employee : public employee, public manager
{
public:
    void getdata()
    {
        cout << endl;
        cout << "Taking Employee input!" << endl;
        cout << endl;
        employee::getdata();
        cout << endl;
        cout << "Taking Manager input!" << endl;
        cout << endl;
        manager::getdata();
    }

    void printdata()
    {
        cout << endl;
        cout << "Printing employee data first" << endl;
        cout << endl;
        employee::printdata();
        cout << endl;
        cout << "Printing manager data next" << endl;
        cout << endl;
        manager::printdata();
    }
};

int main()
{
    manager_employee me1;
    me1.getdata();
    me1.printdata();
    return 0;
}
