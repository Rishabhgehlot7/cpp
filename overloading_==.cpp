#include<iostream>
using namespace std;
class complex{
    float real,imag;
public:
    complex(){}
   
    complex(float a,float b){
        real = a;
        imag = b;
    }
   
    complex operator ==(complex &c){
        complex temp;
        if(real == c.real && imag == c.imag ){
           cout<<"Complex number is equal "<< endl;
        }
        else {
            cout<<"Complex number is not equal" << endl;
        }
        return temp;
    }
   
};

int main(){
    complex c1,c2,c3,c4;
    c1 = complex(1,3);
    c2 = complex(2,3);
    c3 = (c1==c2);
    return 0;
}