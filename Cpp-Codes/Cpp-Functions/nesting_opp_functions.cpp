#include <iostream>
#include <string>
using namespace std;

class binary_functions
{
private:
    string my_name = "abdullah";
    // void binary_functions ::display_complement()
    // {
    //     for (int i = 0; i < number.length(); i++){
    //         cout << number.at(i);
    //     }
    // }

    // function declared and written as private if you uncomment this it throws error coz any variable and functions cannot be changed and called directly in main function it can be changed or called within the class functions or anyother function but inaccessible in main function!

public:
    string number;
    bool is_binary = true;

    void complement_binary(void);
    void display_complement(void);
    void check_binary()
    {
        cout << endl;
        cout << "Enter a number: ";
        cin >> number;

        for (int i = 0; i < number.length(); i++)
        {
            if (number.at(i) != '0' && number.at(i) != '1')
            {
                is_binary = false;
                break;
            }
        }
        if (is_binary == true)
        {
            cout << number << " is binary" << endl;
        }

        else
        {
            cout << number << " is not binary" << endl;
            exit(0);
        }
    }
};

void binary_functions ::complement_binary()
{
    cout << "The complement of " << number << " is ";
    for (int i = 0; i < number.length(); i++)
    {
        if (number.at(i) == '0')
        {
            number.at(i) = '1';
        }
        else
        {
            number.at(i) = '0';
        }
    }
}

void binary_functions ::display_complement()
{
    complement_binary(); // function call within a function!
    for (int i = 0; i < number.length(); i++)
    {
        cout << number.at(i);
    }
}

int main()
{
    binary_functions obj;

    obj.check_binary();
    // obj.complement_binary();
    obj.display_complement();

    return 0;
}