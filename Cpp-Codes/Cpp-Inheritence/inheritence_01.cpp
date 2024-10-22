#include <iostream>
using namespace std;

class employee
{
private:
    /* PRIVATE DATA IS PLACED HERE! */
public:
    string CNIC_Number;
    string name;
    int id;
    float salary;
    employee() {}
    employee(string c, string n, int i, float s)
    {
        CNIC_Number = c;
        name = n;
        id = i;
        salary = s;
    }
    void display()
    {
        cout << CNIC_Number << endl;
        cout << name << endl;
        cout << id << endl;
        cout << salary << endl;
    }
};

class programmer : public employee
{
public:
    string Language_experties = "C++";
    programmer(string c, string n, int i, float s)
    {
        CNIC_Number = c;
        name = n;
        id = i;
        salary = s;
    }
};
int main()
{
    employee abdullah("33102-60932993", "abdullah", 45, 32200.67);
    abdullah.display();
    cout << endl;
    programmer abdullah1("33101-60932786", "Tayaba", 64, 38200.67);
    abdullah1.display();
    cout << abdullah1.Language_experties << endl;

    return 0;
}