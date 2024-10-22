#include <iostream>
using namespace std;

int reverse(int a) // function for reversing number
{
    int res = 0;
    for (; a > 0; a /= 10)
    {
        res = res * 10 + a % 10;
    }

    return res;
}

int factorial(int a) // function for finding factorial of a number
{
    if (a <= 1)
    {
        return 1; // well if user enter 0 or 1 it return automatically 1 this is the purpose of this if!
    }

    return a * factorial(a - 1);
}

void fabonnci() // function for printing fibonacci series if want to include 1 then change next to (0)!
{
    int next = 1;
    int limit = 2242;
    int last = 1;

    while (last <= limit)
    {
        int sum = next + last;
        cout << last << " ";
        next = last;
        last = sum;
    }
}

int nthtemfb(int n) // function for finding nth term in fibonacci series!
{
    if (n <= 1)
    {
        return 1;
    }
    return nthtemfb(n - 1) + nthtemfb(n - 2);

    // break down when the user enter 5 in main function!

    // let the user enter 5
    // return nthtemfb(5 - 1) + nthtemfb(5 - 2)
    // return nthtemfb(4) + nthtemfb(3)
    // It breaks more
    // return nthtemfb(4 - 1) + nthtemfb(4 - 2) + nthtemfb(3 - 1) + nthtemfb(3 - 2)
    // return nthterm(3) + nthterm(2) + nthterm(2) + nthterm(1)
    // return nthtemfb(3-1) + nthtemfb(3-2) + nthterm(2-1) + nthterm(2-2) + nthterm(2-1) + nthterm(2-2) nthterm(1)
    // nthterm(2)+nthterm(1)+nthterm(1)+nthterm(0)+nthterm(1)+nthterm(0)+nthterm(1)
    // nthterm(0)+nthterm(1)+nthterm(0)+nthterm(1)+nthterm(0)+nthterm(1)+nthterm(0)+nthterm(1)
    // 1+1+1+1+1+1+1+1 = 8
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;

    cout << "The " << a << " term of fib is " << nthtemfb(a) << endl;
    cout << endl;

    fabonnci();

    return 0;
}