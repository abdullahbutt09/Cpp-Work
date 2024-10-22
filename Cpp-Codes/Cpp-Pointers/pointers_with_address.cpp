#include <iostream>
using namespace std;

class abdullah
{
public:
    void show()
    {
        cout << "Hello Abdullah!" << endl;
    }
};

class wahab : public abdullah
{
public:
    void show()
    {
        cout << "Hello wahab!" << endl;
    }
};

// class zainab : public abdullah, public wahab
// {
// public:
//     void show()
//     {
//         cout << "Hello zainab!" << endl;
//     }
// };

int main()
{
    abdullah *ptr;
    wahab w1;
    ptr = &w1;
    ptr->show();
    return 0;
}