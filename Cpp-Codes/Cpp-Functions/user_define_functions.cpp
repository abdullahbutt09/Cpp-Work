#include <iostream>
using namespace std;

int sum(int abdullah, int abdullah2); //--> acceptable header file
int sum(int, int);                    //--> acceptable header file
int sum(int a, int b);                //--> acceptable header file
void hurah();
// function prototype include || datatype of function function name (arguments or variables) e.g like int is data type and sum is function name and in brackets we have passed variables or you can say them variables both are same!

int sum(int a, int b)
{
    int c = a + b;
    return c;

    // formal parameters are those in which we created them in different functions which take value from actual parameters and use them to perform the specific action

    // In this case a and b are formal parameters because we are using them in sum function and their values coming and assigning by acutal parameters
}

void hurah(void)
{
    cout << "Congratulations your program is successfully excuted!";
}

int main()
{
    int num1, num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;
    cout << "The sum is: " << sum(num1, num2) << endl; // calling sum function
    hurah();                                           // calling void hurah function

    // acutal parameters are those whose values and variables pass to a function!
    // In this case num1 and num2 are actual parameters
    return 0;
}