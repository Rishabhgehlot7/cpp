/*#include<iostream>
using namespace std;

class NumMean{
    float num1,num2;
    public:
    void setData(int n1,int n2)
    {
        num1=n1;
        num2=n2;
    }
    void getData()
    {
        cout<<"num1 is "<<num1<<endl;
        cout<<"num2 is "<<num2<<endl;

    }
    friend float mean(NumMean a);

};
float mean(NumMean a)
{
    float mean=(a.num1+a.num2)/2;
    return mean;
}
int main()
{
    NumMean a;
    a.setData(4,5);
    a.getData();
    cout<<"mean is "<<mean(a);
    return 0;
}*/
/*
#include <iostream>
using namespace std;
class B;
class A
{
    float x;

public:
    void getData(float p)
    {
        x = p;
    }
    void setData()
    {
        cout<<"num1 is "<<x<<endl;

    }
    friend float sum(A a, B b);
};
class B
{
    float x;

public:
    void getData(float p)
    {
        x = p;
    }
    void setData()
    {
        cout<<"num1 is "<<x<<endl;

    }
    friend float sum(A a, B b);
};
float sum(A a, B b)
{
    float sum=a.x+b.x;
    return sum;
}

int main()
{
    A a;
    B b;
    a.getData(4);
    b.getData(7.25);
    a.setData();
    b.setData();
    cout<<"sum is "<<sum(a,b)<<endl;


    return 0;
}*/

#include <iostream>
using namespace std;
class B;
class A
{
    float x;

public:
    void getData(float p)
    {
        x = p;
    }
    void setData()
    {
        cout << "num1 is " << x << endl;
    }
    friend void swap1(A &, B &);
};
class B
{
    float x;

public:
    void getData(float p)
    {
        x = p;
    }
    void setData()
    {
        cout << "num1 is " << x << endl;
    }
    friend void swap1(A &, B &);
};
void swap1(A &a, B &b)
{
    float temp;
    temp = a.x;
    a.x = b.x;
    b.x = temp;
}

int main()
{   
    A a;
    B b;
    a.getData(8);
    b.getData(5);
    a.setData();
    b.setData();
    swap1(a,b);
    cout<<"after swap"<<endl;
    a.setData();
    b.setData();

    return 0;
}