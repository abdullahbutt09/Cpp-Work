#include <iostream>
using namespace std;

class class1
{
public:
    int var1;
    void display()
    {
        cout << "Value of var1: " << var1 << endl;
    }
};

class class2 : public class1
{
public:
    int var2;
    void display()
    {
        cout << "Value of var1: " << var1 << endl;
        cout << "Value of var2: " << var2 << endl;
    }
};

int main()
{
    class1 *class1_pointer;
    class1 obj1;
    class2 obj2;
    class1_pointer = &obj1; // when i comment this line program terminates no the value of var1 not get set and display function also dont run why?
    class1_pointer->var1 = 9;
    class1_pointer->display();

    class2 *class2_pointer;
    class2_pointer = &obj2;

    class2_pointer->var1 = 90;
    class2_pointer->var2 = 10;
    class2_pointer->display();

    return 0;
}