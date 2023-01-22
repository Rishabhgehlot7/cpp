#include <iostream>
using namespace std;
class b;
class a
{
    int val;

public:
    void setVal(int a)
    {
        val = a;
    }
    void show()
    {
        cout << "value is " << val << endl;
    }
    friend void swap(a &, b &);
};
class b
{
    int data;

public:
    void setVal(int a)
    {
        data = a;
    }
    void show()
    {
        cout << "value is " << data << endl;
    }
    friend void swap(a &, b &);
};
void swap(a &o1, b &o2)
{
    int temp;
    temp = o1.val;
    o1.val = o2.data;
    o2.data = temp;
}
int main()
{
a a1;
b b2;
a1.setVal(5);
b2.setVal(19);
swap(a1,b2);
a1.show();
b2.show();
    return 0;
}