#include <iostream>
#include <windows.h>
#include <conio.h> // For kbhit() and getch()
using namespace std;

int main()
{
    int hours, minutes, seconds;

    while (true)
    {
        cout << "Enter Hours : ";
        cin >> hours;
        cout << "Enter Minutes : ";
        cin >> minutes;
        cout << "Enter Seconds : ";
        cin >> seconds;

        // Check if hours is valid (0-23)
        while (hours < 0 || hours >= 24)
        {
            cout << endl;
            cout << "Invalid Time For Hours!" << endl;
            cout << "Your Enter Hour Time is " << hours << endl;
            cout << "Hours should be between 0-23." << endl;
            cout << endl;
            cout << "Enter Hours : ";
            cin >> hours;
        }

        // Check if minutes is valid (0-59)
        while (minutes < 0 || minutes >= 60)
        {
            cout << endl;
            cout << "Invalid Time For Minutes!" << endl;
            cout << "Your Enter Minutes Time is " << minutes << endl;
            cout << "Minutes should be between 0-59." << endl;
            cout << endl;
            cout << "Enter Minutes : ";
            cin >> minutes;
        }

        // Check if seconds is valid (0-59)
        while (seconds < 0 || seconds >= 60)
        {
            cout << endl;
            cout << "Invalid Time For Seconds!" << endl;
            cout << "Your Enter seconds Time is " << seconds << endl;
            cout << "Seconds should be between 0-59." << endl;
            cout << endl;
            cout << "Enter Seconds : ";
            cin >> seconds;
        }

        break;

        // same condition but we need to update all the time hours mins seconds!

        // if (hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60)
        // {
        //     break;
        // }
        // else
        // {
        //     cout << endl;
        //     cout << "Invalid Input!" << endl;
        //     cout << endl;
        //     cout << "Please enter valid time values." << endl;
        //     cout << "Hours should be between 0-23." << endl;
        //     cout << "Minutes and Seconds should be between 0-59." << endl;
        //     cout << endl;
        // }
    }

    cout << endl;

    bool running = true;
    while (true)
    {
        cout << "Press any key to stop the watch.\n";

        // Check if any key is pressed to stop the watch
        if (kbhit())
        {
            getch(); // Read the key (but don't use it)
            running = false;
            break; // Exit the loop and stop the watch
        }

        // Sleep for 1 second to simulate the ticking of the stopwatch
        Sleep(1000);
        system("cls"); // Clear the screen

        cout << "\t \t \t |----------------STOP WATCH-------------|" << endl;
        cout << "\t \t \t |              " << "H:" << hours << " M:" << minutes << " S:" << seconds << "           |" << '\n';
        cout << "\t \t \t |----------------STOP WATCH-------------|" << endl;
        cout << endl;

        seconds++;
        if (seconds == 60)
        {
            seconds = 0;
            minutes++;
        }

        if (minutes == 60)
        {
            minutes = 0;
            hours++;
        }

        if (hours == 24)
        {
            hours = 0;
        }
    }

    cout << "WATCH STOPPED AT -> " << "|" << "H:" << hours << " M:" << minutes << " S:" << seconds - 1<< "|" << '\n';

    return 0;
}+

/*
    why seconds - 1?

    well if i increments seconds before printing time then i have a 60 in seconds while clock is running!

    & if i increments seconds after printing time then i have a 1+ in seconds when i stop the watch and print the stopped time!

    If anyone knows how to handle it let me know!🙂✅💤
*/