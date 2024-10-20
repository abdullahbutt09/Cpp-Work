#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int hours,minutes,seconds;

    cout << "Enter Hours : ";
    cin >> hours;

    while(hours > 24){
        cout << "Time of hours cannot be greater then 24!"<<endl;
        cout << "Enter Hours Between 1-24 : "<<endl;
        cin >> hours;
    }

    cout << "Enter Minutes : ";
    cin >> minutes;

    while (minutes > 60)
    {
        cout << "Time of hours cannot be greater then 24!" << endl;
        cout << "Enter Hours Between 1-24 : " << endl;
        cin >> hours;
    }
    cout << "Enter Seconds : ";
    cin >> seconds;
    return 0;
}