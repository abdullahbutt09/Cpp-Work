#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "I am eating!" << endl;
    }
};

class Dog : public Animal
{
public:
    void eat()
    {
        cout << "I am eating meat and bread!" << endl;
    }
};
int main()
{
    Dog d1;
    d1.eat(); // Output: I am eating meat and bread!
    Animal a;
    a.eat();
    return 0;
}