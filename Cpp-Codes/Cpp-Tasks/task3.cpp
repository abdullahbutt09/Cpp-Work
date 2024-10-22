#include <iostream>
using namespace std;

class teacher
{
protected:
    string name;
    int age;
    string address;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> address;
    }

    void output()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

class author : virtual public teacher
{
protected:
    int books_written;

public:
    void input()
    {
        teacher::input();
        cout << "Enter number of books written: ";
        cin >> books_written;
    }

    void output()
    {
        teacher::output();
        cout << "Number of books written: " << books_written << endl;
    }
};

class scholar : virtual public teacher, public author
{
public:
    void input()
    {
        author::input();
    }
    void output()
    {
        author::output();
    }
};
int main()
{
    scholar s;
    s.input();
    s.output();
    return 0;
}