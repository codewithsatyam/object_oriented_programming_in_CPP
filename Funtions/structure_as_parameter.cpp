

*******************************************************************************/
#include <iostream>

using namespace std;
struct rectangle{
    int length;
    int breadth;
};

void fun(struct rectangle *r1)
{
    r1->length=20;
    cout<<r1->length<<" "<<r1->breadth<<endl;
}

int main()
{
    struct rectangle r={10,5};
    
    fun(&r);
    cout<<"length:"<<r.length<<endl<<"breadth:"<<r.breadth<<endl;

    return 0;
}

/*****************

output:
20 5
length:20
breadth:5

*****************/
