#include <iostream>
using namespace std;
void swap(int *, int *);
void swap2(int &, int &);
int main()
{
    int a = 10, b = 20;
    cout << "Actual values of a and b" << endl;
    cout << endl;

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << endl;

    // swap(&a, &b); // pointers method
    swap2(a, b);

    cout << "The values after swapping is: " << endl;
    cout << endl;

    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << endl;

    return 0;
}

void swap(int *x, int *y) // pointers calling  method
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int &a, int &b) // refernce calling method
{
    int temp = a;
    a = b;
    b = temp;
}

// pointers kay concept mein tha kay address ko use karke us address par jo value ha usko point out karo
// refernce mein values kay address le kar unki values ko point out karo ko change karo

// pointers mein values ka address use karke un value par point kia jata ha
// refernce mein address actual parameters ka formal parameters mein le kar unki values ko change kia jata ha

// both have same purpose by functioning is different