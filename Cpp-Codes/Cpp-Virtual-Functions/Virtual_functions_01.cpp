#include <iostream>
using namespace std;

class class1
{
public:
    virtual void display()
    {
        cout << "Hello from class1!" << endl;
    }
};

class class2 : virtual public class1
{
public:
    void display()
    {
        cout << "Hello from class2!" << endl;
    }
};

class class3 : virtual public class1, public class2
{
public:
    void display()
    {
        cout << "Hello from class3!" << endl;
    }
};
int main()
{
    class2 *obj1;
    obj1 = new class2;
    obj1->display(); // Outputs: Hello from class2!
    return 0;
}