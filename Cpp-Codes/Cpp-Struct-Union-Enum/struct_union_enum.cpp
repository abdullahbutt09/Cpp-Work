#include <iostream>
using namespace std;

int main()
{

    struct employees // struct type
    {
        int id = 45;
        int salary = 100000;
        string name = "abdullah";
    };

    union type // union type
    {
        int dollar;
        char pound;
        int turkish_lira;
    };

    enum check
    {
        a,
        b,
        c,
        d,
        e,
        f,
        g,
        h,
        i,
        j,
        k
    }; // enum

    cout << j;
    cout << endl;
    union type convert;

    convert.dollar = 28;
    convert.pound = 'c';
    convert.turkish_lira;

    employees number1;

    cout << endl;
    cout << "Employee id number: " << number1.id << endl;
    cout << "Employee per month salary: " << number1.salary << endl;
    cout << "Employee name: " << number1.name << endl;
    cout << endl;

    cout << convert.pound << endl;
    cout << endl;

    return 0;
}

//<---------------------------------------------------------------------->
// struct Customer
// {
//     string name;
//     string booking_date;
//     string room_number;
//     string phone_number;
//     string email;
//     string gender;
//     int age;
// };

// Customer customers[5];

// customers[0] = {"Abdullah", "5th March 2024", "Room #102", "+923094455776", "abdullah@fakemail.com", "Male", 30};

// customers[1] = {"Zain", "5th March 2024", "Room #102", "+923094455776", "zain@fakemail.com", "Male", 40};

// customers[2] = {"Ahmad", "5th March 2024", "Room #102", "+923094455776", "ahmad@fakemail.com", "Male", 50};

// customers[3] = {"Mohamed", "5th March 2024", "Room #102", "+923094455776", "mohamed@fakemail.com", "Male", 60};

// customers[4] = {"haroon", "5th March 2024", "Room #102", "+923094455776", "haroon@fakemail.com", "Male", 70};

// cout << endl;
// int details;
// cout << "Total customers here are 5" << endl;

// string check = "yes"; // Initialize check for the first loop iteration

// while (check == "yes" || check == "YES" || check == "y")
// {
//     cout << "Enter the number of customer you want the details for (1-5): ";
//     cin >> details;

//     if (details >= 1 && details <= 5)
//     {
//         cout << endl;
//         cout << "Name: " << customers[details - 1].name << endl;
//         cout << "Booking Date: " << customers[details - 1].booking_date << endl;
//         cout << "Room Number: " << customers[details - 1].room_number << endl;
//         cout << "Phone number: " << customers[details - 1].phone_number << endl;
//         cout << "Email Address: " << customers[details - 1].email << endl;
//         cout << "Gender: " << customers[details - 1].gender << endl;
//         cout << "Age: " << customers[details - 1].age << endl;
//         cout << endl;

//         // leaving note for myself << customers[details - 1] well when user ask for costomer 1 detail it
//         // it subtract the actual number from 1 to ensure the accuracy of data coz at 0 costomer 1 details
//         // are stored and at 1 costomer 2 details are stored as array start from 0 so thats why if we skip
//         // 0 then we skipping 1 index of array which is not consider good practice so thats why we include
//         // array in this program concept for good accuracy!
//     }
//     else
//     {
//         cout << "There is no such customer here. Please try again!" << endl;
//     }

//     cout << "Do you want to check another customer? (yes/no): ";
//     cin >> check;
//     cout << endl;

//     if (check == "no" || check == "NO" || check == "n")
//     {
//         cout << "Thanks for the checking costomers details feel free to check anytime our database" << endl;
//         cout << endl;
//     }
// }