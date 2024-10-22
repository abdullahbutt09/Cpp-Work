#include <iostream>
using namespace std;

template <class datatype = int, class abdullah = float>

datatype sum(datatype var1, abdullah var2)
{
    return var1 * var2;
}
int main()
{
    cout << sum(4, 5.6);

    return 0;
}