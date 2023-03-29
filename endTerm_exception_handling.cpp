#include <iostream>
using namespace std;
void divide(int a, int b)
{
    try
    {
        if (b != 0)
        {
            cout << "result of division = " << a / b << endl;
        }
        else
        {
            throw b;
        }
    }
    catch (int e)
    {
        cout << "division by 0 is not possible" << endl;
        throw;
    }
}

int main()
{
    int num1,num2;
    cout<<"enter any two numbers for division:";
    cin>>num1>>num2;
    try
    {
        divide(num1,num2);
    }
    catch(...)
    {
        cout<<"exception caught program terminated !";
    }
    
    return 0;
}