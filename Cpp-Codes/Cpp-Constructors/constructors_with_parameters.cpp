/* DISTANCE FORMULA YOU CAN GOOGLE IT DISTANCE BETWEEN TWO POINTS

-----> d =√((x2 – x1)² + (y2 – y1)²). <-----

*/

#include <iostream>
#include <cmath>
using namespace std;

class ticlass
{
private:
    int a;
    int b;
    friend void find_distance(ticlass o1, ticlass o2);

public:
    ticlass(int x, int y)
    {
        a = x;
        b = y;
    }
    void display1()
    {
        cout << "The value of x1 is (" << a << ")"
             << " and the value of y1 is (" << b << ")" << endl;
    }
    void display2()
    {
        cout << "The value of x2 is (" << a << ")"
             << " and the value of y2 is (" << b << ")" << endl;
    }
};

void find_distance(ticlass o1, ticlass o2)
{
    int distance;
    int x_diff = o2.a - o1.a;
    int y_diff = o2.b - o1.b;

    distance = sqrt(pow(x_diff, 2) + pow(y_diff, 2));
    cout << "The distance between the two objects is " << distance << endl;
}

int main()
{
    cout << endl;
    ticlass obj1(0, 1);
    obj1.display1();

    cout << endl;

    ticlass obj2(0, 6);
    obj2.display2();

    cout << endl;

    find_distance(obj1, obj2);
    return 0;
}