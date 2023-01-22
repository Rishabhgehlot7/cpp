#include <iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void setData(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void display()
    {
        cout<<"complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    friend complex sumComplex(complex o1,complex o2);
};
complex sumComplex(complex o1,complex o2)
{
    complex o3;
    o3.setData(o1.a+o2.a,o1.b+o2.b);
    return o3;
}
int main()
{   
    complex o1,o2,o3;
    o1.setData(4,5);
    o1.display();

    o2.setData(11,2);
    o2.display();

    o3=sumComplex(o1,o2);
    o3.display();


    return 0;
}