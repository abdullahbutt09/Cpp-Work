#include <iostream>
using namespace std;

class Muhammad_Saim
{
private:
    float L;
    float W;
    float H;

public:
    Muhammad_Saim(float x, float y, float z)
    {
        L = x;
        W = y;
        H = z;
    }

    void show()
    {
        cout << "Volume is " << L * W * H << endl;
        cout << endl;
        cout << "Suface area is : " << 2 * (L * W + W * H + H * L) << endl;
        cout << endl;
        cout << "Perimeter is : " << 2 * (L + W + H) << endl;
        cout << endl;
    }
};

int main()
{
    cout << endl;
    Muhammad_Saim a1(1.5, 2.4, 4.7), a2(a1);
    a1.show();
    a2.show();
    return 0;
}