/*                          MULTIPLE INHERITENCE
 */

#include <iostream>
using namespace std;

class class1
{
protected:
    int var1;

public:
    void setdata1(int a)
    {
        var1 = a;
    }
    void display1()
    {
        cout << "Value for first class is: " << var1 << endl;
    }
};

class class2
{
protected:
    int var2;

public:
    void setdata2(int a)
    {
        var2 = a;
    }
    void display2()
    {
        cout << "Value for second class is: " << var2 << endl;
    }
};

class class3
{
protected:
    int var3;

public:
    void setdata3(int a)
    {
        var3 = a;
    }
    void display3()
    {
        cout << "Value for third class is: " << var3 << endl;
    }
};

class class4 : public class1, public class2, public class3
{

public:
    void display4();
};
void class4 ::display4()
{
    cout << "The sum of " << var1 << " " << var2 << " " << var3 << " is " << var1 + var2 + var3;
}

int main()
{
    class4 obj;
    obj.setdata1(10);
    obj.setdata2(20);
    obj.setdata3(30);
    obj.display1();
    obj.display2();
    obj.display3();
    obj.display4();

    return 0;
}