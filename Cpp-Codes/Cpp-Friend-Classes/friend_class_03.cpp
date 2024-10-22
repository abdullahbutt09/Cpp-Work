#include <iostream>
#include <cmath>
class class2;
using namespace std;

class class1
{
private:
    friend void find_distance(class1 o1, class2 o2);
    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The value of x1 is " << a << endl;
        cout << "The value of y1 is " << b << endl;
    }
};

class class2
{
private:
    friend void find_distance(class1 o1, class2 o2);

    int a;
    int b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "The value of x2 is " << a << endl;
        cout << "The value of y2 is " << b << endl;
    }
};

void find_distance(class1 o1, class2 o2)
{
    int distance;
    int x_dif = o2.a - o1.a;
    int y_dif = o2.b - o1.b;
    distance = sqrt(pow(x_dif, 2) + pow(y_dif, 2));
    cout << "The distance between the two points is " << distance << endl;
}

int main()
{
    class1 obj1;
    obj1.setdata(0, 1);
    obj1.display();

    class2 obj2;
    obj2.setdata(0, 6);
    obj2.display();

    find_distance(obj1, obj2);

    return 0;
}

/*

--> In constructors its autmatically excuted during the compilation of program and its excuted for that much of times in how many objects are created!

d=√((x2 – x1)² + (y2 – y1)²).   // perform with the help of constructors and objects



 class1()
    {
         cout << endl;
         cout << "Hello World!" << endl; // hence this function is excuted three times
    }


    class1 c1, c2, c3;  three objects



*/