#include <iostream>
#include <string>
using namespace std;
class binary
{
private:
    string s;

public:
    void getData(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary::getData()
{
    cout << "enter your binary number\n"
         << endl;
    cin >> s;
}
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "number is not binary" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
    
}
void binary::display()
{
    cout<<"your binary number is ";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.getData();
    b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}