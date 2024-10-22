#include <iostream>
using namespace std;

class a
{
public:
    a()
    {
        cout << "Class1 constructor!" << endl;
    }
};
class b : virtual public a
{
public:
    b()
    {
        cout << "Class2 constructor!" << endl;
    }
};
class c : virtual public a, public b
{
public:
    c()
    {
        cout << "Class3 constructor!" << endl;
    }
};

int main()
{
    c obj;
    return 0;
}