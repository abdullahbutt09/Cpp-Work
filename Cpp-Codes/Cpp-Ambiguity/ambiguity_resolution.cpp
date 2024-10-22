#include <iostream>
using namespace std;

class class1
{
public:
    void Hello()
    {
        cout << endl;
        cout << "This is CLASS1 HELLO FUNCTION" << endl;
        cout << endl;
    }
};

class class2 : virtual public class1
{
public:
    void Hello()
    {
        cout << endl;
        cout << "This is CLASS2 HELLO FUNCTION" << endl;
        cout << endl;
    }
};

class class3 : public class2, virtual public class1
{
};

int main()
{
    class3 obj1;
    obj1.Hello(); // create an error of ambiguity when you remove virtual keyword from class 3 and class 2 which is inheriting class 1!

    return 0;
}