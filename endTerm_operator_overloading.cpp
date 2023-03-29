/*#include <iostream>
using namespace std;

class complex
{
    float real, imag;

public:
    complex(){real = imag = 0;};
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
*/
/*
#include<iostream>
#include<string.h>
using namespace std;

class addstring{
    public:
    char s1[25],s2[25];
    addstring(char str1[],char str2[])
    {
        strcpy(this->s1,str1);
        strcpy(this->s2,str2);
    }
    void operator+()
    {
        cout<<"\n concatenation :"<<strcat(s1,s2);
    }
};
int main()
{
    char str1[]="hello";
    char str2[]="world";
    addstring a1(str1,str2);
    +a1;

    return 0;
}*/

#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    friend ostream & operator << (ostream &out, const complex &c);
    friend istream & operator >> (istream &in,complex &c);
};
ostream & operator << (ostream &out, const complex &c)
{
    out << c.real;
    out << " +i " << c.imag << endl;
    return out;
}
istream & operator >> (istream &in,complex &c)
{
    cout << "enter real part ";
    in >> c.real;
    cout << "enter imaginary part ";
    in >> c.imag;
    return in;
}

int main()
{
    complex c1;
    cin>>c1;
    cout<<"the complex object is ";
    cout<<c1;
    return 0;

    return 0;
}