#include <iostream>
using namespace std;

int main()
{
    int *id[2];
    string *name[2];
    string *address[2];

    // Input student data
    for (int i = 0; i < 2; i++)
    {
        id[i] = new int;
        name[i] = new string;
        address[i] = new string;
        cout << "Enter Student ID: ";
        cin >> *id[i];
        cout << "Enter Student Name: ";
        cin >> *name[i];
        cout << "Enter Student Address: ";
        cin >> *address[i];
    }

    // Display student data
    for (int i = 0; i < 2; i++)
    {
        cout << "\nStudent ID: " << *id[i] << endl;
        cout << "Student Name: " << *name[i] << endl;
        cout << "Student Address: " << *address[i] << endl;
    }

    // Delete student data
    cout << "Enter which student data you want to delete? (1 or 2): ";
    int delete_index;
    cin >> delete_index;

    if (delete_index == 1 || delete_index == 2)
    {
        delete id[delete_index - 1];
        delete name[delete_index - 1];
        delete address[delete_index - 1];

        id[delete_index - 1] = nullptr;
        name[delete_index - 1] = nullptr;
        address[delete_index - 1] = nullptr;
    }

    // Display specific student data
    cout << "Enter which student data you want to see? (1 or 2): ";
    int see_index;
    cin >> see_index;

    if (id[see_index - 1] != nullptr)
    {
        cout << "\nStudent ID: " << *id[see_index - 1] << endl;
        cout << "Student Name: " << *name[see_index - 1] << endl;
        cout << "Student Address: " << *address[see_index - 1] << endl;
    }
    else
    {
        cout << "Student data not found." << endl;
        cout << "Data for student " << see_index << " has been deleted." << endl;
    }

    return 0;
}
