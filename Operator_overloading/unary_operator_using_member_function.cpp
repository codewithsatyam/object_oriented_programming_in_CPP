#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A()
    {
        x = 0;
    }
    A(int n)
    {
        x = n;
    }
    void showdata()
    {
        cout << "\nvalue of x=" << x << endl;
    }
    void operator-()
    {
        x = -x;
    }
};
main()
{

    A a1(7);
    a1.showdata();
    a1.operator-();
    a1.showdata();
}

//output
/****************
value of x=7

value of x=-7
****************/
