#include <iostream>
using namespace std;

class abdullah
{
private:
    int num1;

public:
    abdullah() : num1(5) {}

    void display()
    {
        cout << endl;
        cout << "The number is: " << num1 << endl;
    }

    void operator++()
    {
        num1--;
    }
};
int main()
{
    abdullah obj;
    obj.display();

    ++obj;
    obj.display();

    return 0;
}