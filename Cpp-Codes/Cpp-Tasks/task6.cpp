#include <iostream>
using namespace std;

class NumberSystem
{
protected:
    int number;

public:
    virtual void getnumber() = 0;
};

class EvenNumber : virtual public NumberSystem
{
public:
    void getnumber()
    {
        cout << "Enter a number : ";
        cin >> number;
        if (number % 2 == 0)
        {
            cout << "Even Number!" << endl;
        }

        else
        {
            cout << "not even!" << endl;
        }
    }
};

class OddNumber : virtual public NumberSystem
{
public:
    void getnumber()
    {
        cout << "Enter a number : ";
        cin >> number;
        if (number % 2 != 0)
        {
            cout << "Odd Number!" << endl;
        }

        else
        {
            cout << "not odd!" << endl;
        }
    }
};

int main()
{
    NumberSystem *nys1;
    EvenNumber e1;
    OddNumber o1;

    nys1 = &e1;
    nys1->getnumber();

    nys1 = &o1;
    nys1->getnumber();

    return 0;
}