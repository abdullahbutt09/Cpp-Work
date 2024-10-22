#include <iostream>
#include <vector>
using namespace std;

template <class type = int>
void Display(vector<int> &refer)
{
    cout << "The elements in the vector is : ";
    for (int i = 0; i < refer.size(); i++)
    {
        cout << refer[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> MyVector1;
    int element, size = 0;

    cout << "Enter the size of the vector : " << endl;
    cin >> size;

    cout << "Enter element to add to the vector :" << endl;
    for (int i = 0; i < size; i++)
    {
        // cin >> MyVector1[i]; ---> throws an error of termination
        cin >> element;
        MyVector1.push_back(element);
    }
    // MyVector1.pop_back(); //--> delete last element
    Display(MyVector1);

    vector<int>::iterator iter = MyVector1.begin(); //--> add element to the begining.

    MyVector1.insert(iter + 1, 4, 500);
    Display(MyVector1);

    vector<int>::iterator iter1 = MyVector1.end(); //--> add element to the end.
    MyVector1.insert(iter1, 500);
    Display(MyVector1);

    return 0;
}