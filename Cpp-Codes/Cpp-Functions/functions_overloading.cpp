#include <iostream>
#define pie 3.1416
using namespace std;
float volume(int);
// int volume(int);
int volume(int, int, int);

int sum(int a, int b)
{
    return a + b;
}

int sum(int a, int b, int c, int d, int e, int f)
{
    return a + b + c + d + e + f;
}

int main()
{

    cout << "The sum is " << sum(5, 4, 45, 5, 6, 5);

    return 0;
}

// int volume(int a) // volume of cube

// {
//     return a * a * a;
// }

int volume(int l, int w, int h) // volume of Rectangular Prism

{
    return l * w * h;
}

float volume(int r) // volume of sphere
{
    return (4.0 / 3.0) * pie * r * r * r;
}

//------> FUNCTIONS OVERLOADING <------
// In functions overloading we can use same name functions with different purposes but there parameters might be different from each other to avoid error in functions recognizing by the compiler otherwise the compiler got confuse which function to call you can also use different datatype with same name function with same parameters but remember 1 thing might me unique either its datatype of function or different parameters!