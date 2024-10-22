#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    static int c = 0; // static retain value for function dont destroy it completely which means after each call of function value increment
    c = c + 1;        // and hold the last value if i dont write static then after each call of function value of c remains zero and not increment it is the use of static in functions

    return a * b + c;
}

int hotelbookrate(int firstime, int secondtime)
{
    return firstime * secondtime;
}
int main()
{

    int a, b;
    // cout << "If you book hotel for 1st time then the charges are " << hotelbookrate(2000, 1) << endl;
    // cout << "If you book hotel for 2nd time then the charges are " << hotelbookrate(2000, 2) << endl;
    // cout << "If you book hotel for 3rd time then the charges are " << hotelbookrate(2000, 3) << endl;
    // cout << "If you book hotel for 4th time then the charges are " << hotelbookrate(2000, 4) << endl;

    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;

    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;
    cout << "product is = " << product(a, b) << endl;

    return 0;
}

// -------> Inline function <---------
// adding inline it excute the code 1 time then after getting output it convert the code
// into that value which is returned by that function istead of calling function again
// and again output is same for both but it is more optimal