#include <iostream>
using namespace std;

class abdullah
{
protected:
    int var2;
    int var1;

    // int var1;       ------> it gives garbage value
    // int var2;       ------> it gives garbage value

    // jis cheez ko pehle lekhtay ho wo pehle excute hota ha!
public:
    // abdullah(int i, int j) : var2(j), var1(i + var1) it gives garbage value
    abdullah(int i, int j) : var2(j), var1(i + var1)
    {
        cout << "Constructor Called" << endl;
        cout << endl;
        cout << "Value of var1 = " << var1 << endl;
        cout << "Value of var2 = " << var2 << endl;
        cout << endl;
    }
};

int main()
{
    abdullah obj1(5, 10);
    return 0;
}