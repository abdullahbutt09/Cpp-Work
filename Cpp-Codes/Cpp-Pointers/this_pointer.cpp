#include <iostream>
using namespace std;
/*
1. first we use this when the paramenets name and the local variable names are same!
*/
class A
{
public:
    int a, b = 0;
    A(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << "A(" << a << ", " << b << ")\n";
    }
};
int main()
{
    A obj1(5, 10);
    obj1.display();
    return 0;
}