#include<iostream>
using namespace std;

class shop{
    int itemID[100];
    int itemPrice[100];
    int countor;
    public:
    void inlicountor(void){countor=0;}
    void setprize(void);
    void displayitem(void);
};
void shop::setprize()
{
    cout<<"enter the itme "<<countor+1<<" id number "<<endl;
    cin>>itemID[countor];
    cout<<"enter the itme "<<countor+1<<" prize number "<<endl;
    cin>>itemPrice[countor];
    countor++;
}
void shop::displayitem()
{
    for (int i = 0; i < countor; i++)
    {
        cout<<"item id no. "<<itemID[i]<<" prize is "<<itemPrice[i]<<endl;
    }
    
}
int main()
{
 shop dukaan;
 dukaan.inlicountor();
 dukaan.setprize();
 dukaan.setprize();
 dukaan.displayitem();
    
     
 return 0;
    }