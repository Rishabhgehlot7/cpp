/*
#include <iostream>
using namespace std;
class space
{
    int x;
    int y;
    int z;

public:
    void getdata(int a, int b, int c);
    void display(void);
    void operator-(); // operator overloadig inary minus
};
void space::getdata(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}
void space::display(void)
{
    cout << "x = " << x << " ";
    cout << "y = " << y << " ";
    cout << "z = " << z << " "<<endl;
}

void space::operator-()
{
    x = -x;
    y = -y;
    z = -z;
}
int main()
{
    space s;
    s.getdata(10,-20,30);
    cout<<" s : ";
    s.display();
    -s;

    cout<<"-s : ";
    s.display();

    return 0;
}
*/
#include <iostream>
using namespace std;
class complex
{
    float x;
    float y;

public:
    complex() {}
    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }
    complex operator+(complex);
    void display(void);
    complex operator+(int value)
    {
        this->x = value + this->x;
        return *this;
    }
};
// c3 = c1 + c2;
complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return temp;
}
void complex::display()
{
    cout << x << " + j" << y << "\n";
}
int main()
{
    complex c1, c2, c3;
    c1 = complex(2.5, 3.5);
    c2 = complex(1.6, 2.7);
    c3 = c1 + c2;

    cout << "c1 = ";
    c1.display();
    cout << "c1 = ";
    c2.display();
    cout << "c1 = ";
    c3.display();
    // complex c1(5,6);
    // complex result;
    // result=c1+10;
    // result.display();

    return 0;
}