#include <iostream>
using namespace std;
class complex
{
    float real, imag;

public:
    complex(){};
    complex(float a, float b)
    {
        real = a;
        imag = b;
    }
    complex operator+(complex &c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    void show()
    {
        cout << real << " + " << imag << " i " << endl;
    }
};

int main()
{

    complex c1, c2, c3;
    c1 = complex(2, 3);
    c2 = complex(3, 4);
    c3 = c1 + c2;
    c3.show();
    return 0;
}