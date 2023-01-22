#include<iostream>
using namespace std;

class space
{
    int x,y,z;
    public:
        void getData(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }   
        void showData()
        {
            cout<<x<<endl;
            cout<<y<<endl;
            cout<<z<<endl;

        }
        void operator - ()
        {
            x=-x;
            y=-y;
            z=-z;
        }

};
int main()
{
    space s1;
    s1.getData(10,20,30);
    cout<<"original nos. are "<<endl;
    s1.showData();
    cout<<"nos after change in sign are "<<endl;
    -s1;
    s1.showData();
    return 0;

    return 0;
}