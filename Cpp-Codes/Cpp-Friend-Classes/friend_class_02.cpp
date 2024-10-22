#include <iostream>
using namespace std;
class class2;

class class1
{
    int a;

public:
    friend void sumdata(class1 obj1, class2 obj2);
    void setdata(int x)
    {
        a = x;
    }

    void getdata()
    {
        cout << "The value of a of class 1 is : " << a << endl;
    }
};

class class2
{
    int a;
    friend void sumdata(class1 obj1, class2 obj2);

public:
    void setdata(int x)
    {
        a = x;
    }

    void getdata()
    {
        cout << "The value of a of class 2 is : " << a << endl;
    }
};

void sumdata(class1 o1, class2 o2)
{
    cout << "The value of adding both values are : " << o1.a + o2.a << endl;
}

int main()
{
    class1 obj1;
    class2 obj2;
    obj1.setdata(10);
    obj2.setdata(20);

    obj1.getdata();
    obj2.getdata();

    sumdata(obj1, obj2);
    return 0;
}