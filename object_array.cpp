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
    employee e[4];
    for (int i = 0; i < 4; i++)
    {
    employee::getCount();
    e[i].setData();
    e[i].getData();
        
    }
    

  
}