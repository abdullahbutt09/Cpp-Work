#include <iostream>
using namespace std;

class abc
{
protected:
    int n;

public:
    abc(string a1, string a2, int a3)
    {
        cout << endl;
        cout << "I am in class 1" << endl;
        cout << endl;
        cout << "Parent class constructor!" << endl;
        cout << "value of string 1 is : " << a1 << endl;
        cout << "value of string 1 is : " << a2 << endl;
        cout << "Value of int 1 is : " << a3 << endl;
    }
    void showdata()
    {
        cout << "Value of n is " << n << endl;
    }
};

class def : public abc
{
protected:
public:
    def() : abc("abdullah", "butt", 45)
    {
        cout << "I am in class 2!" << endl;
        cout << endl;
    }
};

int main()
{
    def d1;

    return 0;
}