#include <iostream>
using namespace std;

class Marks
{
private:
    string name;
    int rollNo;
    int marks;

public:
    void getdata(string na, int a, int b)
    {
        name = na;
        rollNo = a;
        marks = b;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main()
{
    Marks *m1 = new Marks[3];
    Marks *m1[3];
    m1[3] = new Marks;

    string name;
    int rollNo, marks;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Details for student number " << i + 1 << endl;
        cout << "Name : ";
        cin >> name;
        cout << "Roll No : ";
        cin >> rollNo;
        cout << "Marks : ";
        cin >> marks;
        m1->getdata(name, rollNo, marks);
    }

    cout << "\nDetails of Students:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << ":\n";
        (m1 + i)->display();
    }

    return 0;
}