// Most simplest coding example of templates in C++ //

#include <iostream>
using namespace std;

template <class datatype> // by using this now we can transfer data type like int , float , char , string.

class Abdullah
{
private:
    datatype var1;
    datatype var2;

public:
    void getdata(datatype data1, datatype data2)
    {
        var1 = data1;
        var2 = data2;
    }

    /*
    In the getdata function i give 2 paraments so we have to pass 2 arguments from the main function and we cannot use same object to use same functions for different datatypes  coz due to same object and different datatypes it might confuse the compiler and give you the error of redeclaration for using same objects.
    */

    void printdata()
    {
        cout << "Value of var1 : " << var1 << endl;
        cout << "Value of var2 : " << var2 << endl;
        cout << endl;
    }
};

int main()
{
    Abdullah<int> obj1;
    obj1.getdata(6, 7);
    obj1.printdata();

    // Abdullah<int> obj1;
    // obj1.getdata(6, 7);   ---> It throws error.
    // obj1.printdata();

    Abdullah<float> obj2;
    obj2.getdata(6.1, 7.6);
    obj2.printdata();

    Abdullah<char> obj3;
    obj3.getdata('A', 'B');
    obj3.printdata();

    Abdullah<string> obj4;
    obj4.getdata("Your Name", "Your Name");
    obj4.printdata();

    return 0;
}