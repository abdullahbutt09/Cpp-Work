#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int element, size;
    cout << "Enter size of vector : " << endl;
    cin >> size;
    std::vector<int> myvector;

    cout << "Enter elements : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        myvector.push_back(element);
    }

    cout << "---------------------" << endl;
    cout << "data collected :" << endl;
    // cout << "size here : " << myvector.size() << endl;
    for (int i = 0; i < myvector.size(); i++)
    {
        cout << myvector[i] << endl;
    }
    return 0;
}

// vector<int> vectr = {4, 6, 7, 2, 5, 4, 5, 6};
// cout << vectr.size(); --> Display size of the vector!
// cout << vectr.max_size() << endl;

// myvector.size() : At the start of each loop iteration, myvector.size() gives the current number of elements in the vector.push_back(element) :

// Each call to push_back appends the new element to the end of the vector and increases its size by one.Therefore, the size of the vector increases with each iteration.