#include <iostream>
using namespace std;

class class1
{
public:
    virtual void display()
    {
        cout << "1" << endl;
    }
};

class class2 : virtual public class1
{
public:
    void display()
    {
        cout << "2" << endl;
    }
};

class class3 : virtual public class1, public class2
{
public:
    void display()
    {
        cout << "3" << endl;
    }
};
int main()
{
    class1 *obj1;

    obj1 = new class1;
    obj1->display();
    obj1 = new class2;
    obj1->display();
    obj1 = new class3;
    obj1->display();

    // class1 *obj1, *obj2, *obj3;
    // obj1 = new class1;
    // obj1->display();
    // obj2 = new class2;
    // obj2->display();
    // obj3 = new class3;
    // obj3->display();

    return 0;
}