#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex()
    {
        a = 10;
        b = 9;
    }
    void display()
    {
        cout << " complex number is " << a << " + " << b << "i " << endl;
    }
};

int main()
{
    complex o1;
    o1.display();
    return 0;
}