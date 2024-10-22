/*                          MULTILEVEL INHERITENCE
 */
#include <iostream>
using namespace std;

class StudentData
{
protected:
    int rollno;

public:
    string name;
    string FatherName;
    string MotherName;
    int age;

    void setdata(int r, string n, string f, string m, int a);
};

void StudentData::setdata(int r, string n, string f, string m, int a)
{
    rollno = r;
    name = n;
    FatherName = f;
    MotherName = m;
    age = a;
}

class StudentExam : public StudentData
{
protected:
    float English;
    float Maths;
    float Physics;
    float Computer;

public:
    void getmarks(int e, int m, int p, int c);
};

void StudentExam::getmarks(int e, int m, int p, int c)
{
    English = e;
    Maths = m;
    Physics = p;
    Computer = c;
}

class StudentRecord : public StudentExam
{
protected:
    float Percentage;
    // float Percentage = (English + Physics + Maths + Computer) / 4;
    /*

    When i calculate percentage here then it gives me garbage value why?
    I am setting the marks before the display function then how these subjects
    have garbage value and why the percentage is not calculating correctly?
    when i calculate it in displayrecord() function it calculates accurately but
    when i calculate it in class it gives me inaccurate percentage why ?

    Answer --->
    When you define `float Percentage = (English + Physics + Maths + Computer) / 4;` directly in the class definition, it gets executed at the time the object is created. At that moment, the variables `English`, `Physics`, `Maths`, and `Computer` have not been assigned any values yet because you set them later using the `getmarks()` function. This leads to garbage values or unpredictable results in the `Percentage` calculation.

    Moving the percentage calculation inside the `DisplayRecord()` function ensures that it is calculated after you've set the marks using `getmarks()`. This way, you get the correct and expected percentage based on the actual marks inputted for the student.

    */

public:
    void DisplayRecord();
};

void StudentRecord::DisplayRecord()
{
    Percentage = (English + Physics + Maths + Computer) / 4;
    cout << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Father Name: " << FatherName << endl;
    cout << "Mother Name: " << MotherName << endl;
    cout << "Age: " << age << endl;
    cout << "English: " << English << endl;
    cout << "Maths: " << Maths << endl;
    cout << "Physics: " << Physics << endl;
    cout << "Computer: " << Computer << endl;
    cout << "Percentage: " << Percentage << endl;
    cout << endl;
}
int main()
{
    StudentRecord Abdullah;
    Abdullah.setdata(82, "Abdullah Bin Mughira", "Muhammad Mughira", "Hina Butt", 20);
    Abdullah.getmarks(78, 89, 90, 78);
    Abdullah.DisplayRecord();

    return 0;
}