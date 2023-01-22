#include<iostream>
using namespace std;

class employee{
    private:
    int salary;
    int number;
    public:
    char name[10];
    void getData(int a,int b);
    void setData()
    {
        cout<<"employeee name is "<<name<<endl;
        cout<<name <<" s' number is "<<number<<endl;
        cout<<name<<" s' salary is "<<salary<<endl;

    }
};
void employee::getData(int a,int b)
{
    salary=a;
    number=b;
    
}
int main()
{
    employee e1;
    cin>>e1.name;
    e1.getData(825,1234567);
    e1.setData();


    return 0;
}