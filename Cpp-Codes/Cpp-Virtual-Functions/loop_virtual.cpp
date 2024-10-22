#include <iostream>
using namespace std;

class class1
{
public:
    virtual void display()
    {
        cout << "1" << endl;
    }
};

class class2 : virtual public class1
{
public:
    void display()
    {
        cout << "2" << endl;
    }
};

class class3 : virtual public class1, public class2
{
public:
    void display()
    {
        cout << "3" << endl;
    }
};
int main()
{
    int choice;
    class1 *obj1[6];
    cout << "Enter 1 for parent 2 for 2nd child 3 for 3rd child :: " << endl;

    for (int i = 0; i < 6; i++)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj1[i] = new class1;
            break;
        case 2:
            obj1[i] = new class2;
            break;
        case 3:
            obj1[i] = new class3;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
    cout << endl;
    cout << "Number must be matched!" << endl;
    for (int i = 0; i < 6; i++)
    {
        obj1[i]->display();
    }

    return 0;
}