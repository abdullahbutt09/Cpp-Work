#include <iostream>
#include <list>

using namespace std;

void display(list<int> &myList)
{
    for (auto i = myList.begin(); i != myList.end(); ++i)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "Enter which element you want to remove from the list ?" << endl;

    int remove_element;
    cin >> remove_element;
    for (auto i = myList.begin(); i != myList.end(); i++)
    {
        if (*i == remove_element)
        {
            myList.erase(i);
            break;
        }
    }
    cout << "New list elements = ";
    for (auto i = myList.begin(); i != myList.end(); ++i)
    {
        cout << *i << " ";
    }
}

void takeinput(list<int> &myList, list<int>::iterator &iter)
{
    int num;
    cout << "Enter a number (-1 to exit): " << endl;

    while (true)
    {
        cin >> num;

        if (num == -1)
        {
            break;
        }

        myList.push_back(num);
    }
    display(myList);
}

int main()
{
    list<int> mylist;
    list<int>::iterator iter;
    
    // if (check)
    // {
    //     cout << "List is empty" << endl;
    // }
    // else
    // {
    //     cout << "List is not empty" << endl;
    // }

    // cout << myList.empty();

    // takeinput(myList, iter);

    // int num;
    // cout << "Enter a number (-1 to exit): " << endl;

    // while (true)
    // {
    //     cin >> num;

    //     if (num == -1)
    //     {
    //         break;
    //     }

    //     myList.push_back(num);
    // }

    // for (iter = myList.begin(); iter != myList.end(); iter++)
    // {
    //     cout << *iter << " ";
    // }

    return 0;
}
