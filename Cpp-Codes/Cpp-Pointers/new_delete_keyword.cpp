#include <iostream>
using namespace std;

int main()
{
    // Allocate an array of 5 integers
    int *arr = new int[5];

    // Input values into the array
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Printing numbers:" << endl;

    // Print the values in the array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Deleting data in the array!" << endl;

    // Correctly deallocate the array
    delete[] arr;
    arr = nullptr;

    cout << arr[0];
    // Allocate a new array for new input
    // arr = new int[5];

    // cout << "Input new numbers:" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "Printing new numbers:" << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    return 0;
}
