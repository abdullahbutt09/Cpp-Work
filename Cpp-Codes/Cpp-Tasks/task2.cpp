#include <iostream>
using namespace std;

class employee
{
protected:
    int employee_id;
    string scale;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> employee_id;
        cout << "Enter Scale (Full Time/Part Time): ";
        cin >> scale;
    }
    void output()
    {
        cout << "Employee ID: " << employee_id << endl;
        cout << "Scale: " << scale << endl;
    }
};

class manager : public employee
{
protected:
    int manager_id;
    string department;

public:
    void input()
    {
        employee::input();
        cout << "Enter Manager ID: ";
        cin >> manager_id;
        cout << "Enter Department: ";
        cin >> department;
    }
    void output()
    {
        employee::output();
        cout << "Manager ID: " << manager_id << endl;
        cout << "Department: " << department << endl;
    }
};
int main()
{
    manager m1;
    m1.input();
    m1.output();

    return 0;
}