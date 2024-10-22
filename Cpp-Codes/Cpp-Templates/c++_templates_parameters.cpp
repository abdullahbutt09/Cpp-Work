#include <iostream>
using namespace std;

template <class datatype = int, class mrx = float, class noname = double>
class abdullah
{
private:
    datatype var1;
    datatype var2;

public:
    void multiply(datatype var1, datatype var2)
    {
        this->var1 = var1;
        this->var2 = var2;
    }

    void output()
    {
        cout << "The answer is : " << var1 * var2 << endl;
    }
};
int main()
{
    abdullah<float, int> obj1;
    obj1.multiply(5.6, 6);
    obj1.output();
    abdullah<int, float> obj2;
    obj2.multiply(6, 5.6);
    obj2.output();

    return 0;
}