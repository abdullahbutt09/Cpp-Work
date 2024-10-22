#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int First_Number;
    int Second_Number;
    char Op;

public:
    void getvalues(int a, int b)
    {
        First_Number = a;
        Second_Number = b;
    }

    void getoperator(char o)
    {
        Op = o;
    }

    int calculate()
    {
        if (Op == '+')
        {
            cout << "The sum of " << First_Number << Op << Second_Number << " is " << add() << endl;
        }
        else if (Op == '-')
        {
            cout << "The difference of " << First_Number << Op << Second_Number << " is " << subtract() << endl;
        }
        else if (Op == '*')
        {
            cout << "The product of " << First_Number << Op << Second_Number << " is " << multiply() << endl;
        }
        else if (Op == '/')
        {
            if (Second_Number == 0)
            {
                cout << "Cannot divide by 0" << endl;
            }
            else
            {
                cout << "The quotient of " << First_Number << Op << Second_Number << " is " << divide() << endl;
            }
        }
        return 0;
    }

    int add()
    {
        return First_Number + Second_Number;
    }
    int subtract()
    {
        return First_Number - Second_Number;
    }
    int multiply()
    {
        return First_Number * Second_Number;
    }
    int divide()
    {
        return First_Number / Second_Number;
    }
};

class ScientificCalculator : public SimpleCalculator
{
public:
    int calculate()
    {
        cout << endl;
        cout << "The square root of " << First_Number << " is " << sqrt(First_Number) << endl;
        cout << endl;
        cout << "The square root of " << Second_Number << " is " << sqrt(Second_Number) << endl;
        cout << endl;

        return 0;
    }

    int getvalue(int a, int b)
    {
        First_Number = a;
        Second_Number = b;

        cout << "The cube root of " << First_Number << " is " << cbrt(First_Number) << endl;
        cout << endl;
        cout << "The cube root of " << Second_Number << " is " << cbrt(Second_Number) << endl;
        return 0;
    }
};

// class HybridCalculator : public SimpleCalculator, public ScientificCalculator
// {
// public:
// }; error here!

int main()
{
    cout << endl;
    SimpleCalculator sc;
    sc.getvalues(4, 4);
    sc.getoperator('/');
    sc.calculate();

    ScientificCalculator ssc;
    ssc.getvalues(4, 144);
    ssc.calculate();
    ssc.getvalue(8, 64);

    // HybridCalculator hsc; error here!

    return 0;
}
