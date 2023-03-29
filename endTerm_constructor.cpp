#include <iostream>
using namespace std;

class complex
{
    float real, imag;

public:
    complex()
    {
        real = imag = 0;
    }
    complex(float a)
    {
        real = imag = a;
    }
    complex(float a, float b)
    {
        real = a;
        imag = b;
    }
    complex(complex &x)
    {
        real = x.real;
        imag = x.imag;
    }
    friend complex add(complex &a, complex &b);
    friend complex subtract(complex &a, complex &b);
    friend void show(complex &a);
};
complex add(complex &a, complex &b)
{
    complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}
complex subtract(complex &a, complex &b)
{
    complex c;
    c.real = a.real - b.real;
    c.imag = a.imag - b.imag;
    return c;
}
void show(complex &a)
{
    cout << a.real << " + " << a.imag << "i" << endl;
}
int main()
{
    complex c1;
    complex c2(1.5);
    complex c3(2, 3);
    complex c4(c3);
    complex c5, c6;
    c5 = add(c1, c2);
    cout << "sum of the given complex number is ";
    show(c5);
    c6 = subtract(c4, c2);

    cout << "substract of the given complex number is ";
    show(c6);
    return 0;
}