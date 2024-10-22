#include <iostream>
using namespace std;

class animals
{
private:
    string name;
    int age;
    string gender;
    string color;
    string weight;
    static int count;

public:
    void call_functions();
    void display_data();

    void set_name()
    {
        cout << endl;
        cout << "Enter the name of the animal: ";
        cin >> name;
        cout << endl;
    }
    void set_age()
    {
        cout << "Enter the age of the animal: ";
        cin >> age;
        cout << endl;
    }
    void set_gender()
    {
        cout << "Enter the gender of the animal: ";
        cin >> gender;
        cout << endl;
    }
    void set_color()
    {
        cout << "Enter the color of the animal: ";
        cin >> color;
        cout << endl;
    }
    void set_weight()
    {
        cout << "Enter the weight of the animal: ";
        cin >> weight;
        cout << endl;
    }

    void init_count()
    {
        cout << "Number of animals are :: " << count;
    }
};

void animals::call_functions()
{
    set_name();

    set_age();

    set_gender();

    set_color();

    set_weight();
}

void animals::display_data()
{
    cout << endl;
    cout << "------------> DATA COLLECTED <------------" << endl;
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Color: " << color << endl;
    cout << "Weight: " << weight << endl;
    cout << endl;
    cout << "-----------------------------------" << endl;
    count++;
}

int animals::count;

int main()
{
    animals cat, dog, c;
    cat.call_functions();
    cat.display_data();

    dog.call_functions();
    dog.display_data();

    c.init_count();

    return 0;
}