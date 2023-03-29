#include <iostream>
using namespace std;

class Test
{
    static int count_obj;

public:
    Test()
    {
        count_obj++;
        cout << "contructor message : object " << count_obj << " create ." << endl;
    }
    ~Test()
    {
        count_obj++;
        cout << "Destructor message : object " << count_obj << " deleted ." << endl;
    }
};
int Test::count_obj;

int main()
{
Test T1;
{
    Test t2,t3;
}
    return 0;
}