#include <iostream>
using namespace std;

class class1
{
private:
    int a, b;

public:
    void setdata(int x, int y)
    {
        // --use this without arguments directly ask for a and b value--

        // cout << "Enter value of a:";
        // cin >> a;
        // cout << "Enter value of b:";
        // cin >> b;

        // a = 10;
        // b = 20;               also true

        a = x;
        b = y;
    }

    friend class1 trying(class1 obj1, class1 obj2);

    // void getdata(class1 obj1, class1 obj2)
    // {
    //     class1 obj3;
    //     a = obj1.a + obj2.a;
    //     b = obj1.b + obj2.b;
    // }

    void display_complex()
    {
        cout << "The sum of your complex number is " << a << " + " << b << "i" << endl;
        cout << endl;
    }
};

class1 trying(class1 obj1, class1 obj2)
{
    class1 obj3;
    obj3.setdata((obj1.a + obj2.a), (obj1.b + obj2.b));
    return obj3;
}

int main()
{
    class1 a1, b1, c1, okl;

    a1.setdata(5, 6);
    a1.display_complex();

    b1.setdata(9, 7);
    b1.display_complex();

    // c1.getdata(a1, b1);
    // c1.display_complex();

    okl = trying(a1, b1);
    okl.display_complex();

    return 0;
}

//    void getdata(int v1 , int v2){
//     a=v1;
//     b=v2;
//    }
// void getobject(class1 obj1, class1 obj2)
// {
//     cout << endl;
//     cout << "The value of a is : " << obj1.a << endl;      this will print the value of a = 10
//     cout << "The value of b is : " << obj1.b << endl;       this will print the value of b = 5
//     cout << endl;
//     cout << "The sum is " << obj1.a + obj1.b << endl;       this will print the sum of a and b: 15
//     b = obj1.b + obj2.b;                                    this will print 10 the sum of b+b
//     a = obj1.a + obj1.a;                                    this will print 20 the sum of a+a
//     cout << a << endl;
//     cout << b << endl;
// }