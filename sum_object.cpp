#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void display()
    {
        cout << "complex number is " << a << "+ i" << b << endl;
    }
    void sumbyObject(complex o1, complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }

};

int main()
{   
    complex o1,o2,o3;
    o1.setData(2,3);
    o1.display();
    o2.setData(5,5);
    o2.display();
    o3.sumbyObject(o1,o2);
    o3.display();

    return 0;
}