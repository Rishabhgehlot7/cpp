#include<iostream>
using namespace std;
class complex;
class calculetor{
    public:
    int sum(int v2,int v1)
    {
        return v1+v2;
    }
    int sumRealComplex(complex,complex);
    int sumCompComplex(complex,complex);
    
};
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
    // friend int calculetor::sumRealComplex(complex ,complex );
    // friend int calculetor::sumCompComplex(complex ,complex );
    friend class calculetor;
};

int calculetor::sumRealComplex(complex o1,complex o2)
{
    return o1.a+o2.a;
}

int calculetor::sumCompComplex(complex o1,complex o2)
{
    return o1.b+o2.b;
}
int main()
{
      complex o1, o2;
    o1.setData(1, 4);
    o2.setData(5, 7);
    calculetor calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
    return 0;
}