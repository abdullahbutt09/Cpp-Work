#include <iostream>
using namespace std;

class class1
{
    double a, b;

public:
    class1(double x, double y)
    {
        cout << "This is constructor 1" << endl;
        a = x;
        b = y;
        cout << a + b << endl;
    }

    class1(int x, int y)
    {
        cout << "This is constructor 2" << endl;
        a = x;
        b = y;
        cout << a + b << endl;
    }
};

int main()
{
    double a;
    double b;

    cout << "Enter an integer number and a float number :: " << endl;
    cin >> a >> b;
    class1 obj1(a, b);

    return 0;
}