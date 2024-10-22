#include <iostream>
using namespace std;

class abdullah
{
protected:
    char name[10];
    int age;

public:
    void in()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void out()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    abdullah *person1[5];

    for (size_t i = 0; i < 5; i++)
    {
        person1[i] = new abdullah;
        person1[i]->in();
    }

    for (size_t i = 0; i < 5; i++)
    {
        person1[i]->out();
    }

    return 0;
}