#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> list1;
    // list1.emplace_front(1);
    // list1.emplace_front(2);
    // list1.emplace_front(3);
    // list1.emplace_front(4);
    // list1.push_front(1);
    // list1.push_front(2);  
    // list1.push_front(3);
    // list1.push_front(4);

    /*
    emplace_front & push_front --> pehle position par store karega data.

    pehle 1 ayega first postion par
    then 2 ayega first postion par
    then 3 ayega first postion par
    then 4 ayega first postion par

   so list banay gey 4 3 2 1.
       */

    list<int>::iterator iter;
    for (auto i = list1.begin(); i != list1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    // list1.reverse(); // --> print list in reverse order.

    // list<int> list2 = list1;

    // for (auto i = list1.begin(); i != list1.end(); i++)
    // {
    //     cout << *i << " ";
    // }
    // cout << endl;

    return 0;
}