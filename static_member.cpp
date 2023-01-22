#include<iostream>
using namespace std;

class employee{
    int id;
    static int count;
    public:
    void setData()
    {
        cout<<"Enter the employee id"<<endl;
        cin>>id;
        count++;
    }
    void getData()
    {
        cout<<"employee "<<count<<" id is "<<id<<endl;
    }
    static void getCount()
    {
        cout<<"employee count is "<<count<<endl;
    }
};
int employee::count=1000;
int main()
{
    employee e1,e2,e3;
    employee::getCount();
    e1.setData();
    e1.getData();

    employee::getCount();
    e2.setData();
    e2.getData();

    employee::getCount();
    e3.setData();
    e3.getData();
}