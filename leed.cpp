#include<iostream>
using namespace std;

int reverse(int x){
int temp=x,div;
double sum=0;
while(temp>0)
{
    div=temp%10;
    sum=sum*10+div;
    temp=temp/10;
}
return sum;
}

int main()
{   
    double sum=reverse(-258);
    cout<<sum;
    
    return 0;
}