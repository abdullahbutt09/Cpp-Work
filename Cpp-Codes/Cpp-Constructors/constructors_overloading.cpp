#include <iostream>
using namespace std;

class ticlass1
{
private:
    int a, b;

public:
    ticlass1(int x = 0, int y = 0)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << endl;
        cout << "YOUR COMPLEX NUMBER IS " << a << " + " << b << "i" << endl;
        cout << endl;
    }
};

int main()
{
    ticlass1 obj1(1, 2);
    obj1.display();
    


    return 0;
}