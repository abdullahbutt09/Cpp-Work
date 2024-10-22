#include <iostream>
using namespace std;

class class1
{
    int a;
    int b;

public:
    friend class class2;       // ye mein nay declaration de ha kay class2 is your friend isko prototype bhi kehtay ha!
    void getdata(int x, int y) // ye ha wo function jo values assign karay ga x or y ko then wo values class kay private variables a and b ko assign of ho jae gey!
    {
        a = x;
        b = y;
    }
};

class class2
{
public:
    void access_data(class1 obj1) // Yaha mein nay class1 ka 1 object banaya ha jisse mein class1 kay private variables ko access kar sakon!
    {
        cout << obj1.a << endl;
        cout << obj1.b << endl;
    }
};

int main()
{
    class1 obj1;
    class2 obj2;

    obj1.getdata(67, 32); // Is line of code mein ham class1 kay getdata function mein values pass kar rahay hain!

    cout << "accessing class1 members from class 2" << endl;
    cout << endl;
    obj2.access_data(obj1); // Is statment mein ham nay obj1 pass kia ha jisse ham complier ko ye bata rahay hain ke is object ke madad say ham class1 kay private variables ko access karein gey!
    cout << endl;

    return 0;
}
