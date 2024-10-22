#include <iostream>
using namespace std;

class abdullah
{
public:
    int age;
    abdullah(int a, int b) : age(21)
    {
        cout << "Hello from Abdullah's constructor, age: " << age << endl;
    }
};

class child : public abdullah
{
public:
    child(int age, int s) : abdullah(age, s)
    {
        cout << "Hello from Child's constructor, age: " << age << endl;
    }
};

int main()
{
    child c(15, 6);
    return 0;
}

/*
Output:
Hello from Abdullah's constructor, age: 21
Hello from Abdullah's constructor, age: 15
*/