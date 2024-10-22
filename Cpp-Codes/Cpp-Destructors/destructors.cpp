#include <iostream>
using namespace std;

class abdullah
{
private:
    static int count;

public: 
    abdullah()
    {
        count++;
        cout << "Constructor is called for object # " << count << endl;
    }
    ~abdullah()
    {
        cout << "Destructor is called for object # " << count << endl;
        count--;
    }
};

int abdullah::count = 0;

/*
This is a static variable incrementing and decrementing on every destructor and constructor call with the updated value which means it increment and decrement the updated value which is used by last constructor and destructor!
*/

int main()
{
    abdullah a1;

    cout << "Creating 5 objects " << endl;
    abdullah a2, a3, a4, a5, a6;

    return 0;
}