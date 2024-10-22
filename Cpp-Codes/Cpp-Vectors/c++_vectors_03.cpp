#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> myvec(8);

    // myvec.resize(10);

    // cout << "This is capacity : " << myvec.capacity() << endl;

    // cout << "This is size : " << myvec.size() << endl;

    std::vector<int> myvector;

    // set some content in the vector:
    for (int i = 0; i < 499; i++)
    {
        myvector.push_back(i);
    }
    std::cout << "size: " << myvector.size() << '\n';
    std::cout << "capacity: " << myvector.capacity() << '\n';
    std::cout << "max_size: " << myvector.max_size() << '\n';

    cout << endl;
    cout << "--------------------------" << endl;
    cout << endl;
    std::vector<int> myvector1(100);
    std::cout << "1. capacity of myvector1: " << myvector1.capacity() << '\n';

    std::cout << "2. capacity of myvector1: " << myvector1.capacity() << '\n';

    myvector1.resize(10); 
    myvector1.shrink_to_fit();
    std::cout << "3. capacity of myvector1: " << myvector1.capacity() << '\n';

    cout << endl;
    return 0;
}