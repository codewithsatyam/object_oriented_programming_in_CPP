//Program to demonstrate the use of Templates.

#include <iostream>
 
using namespace std;
 
template<class t>
 
class Arithmetic
 
{
 
    private:
 
    t a;
 
    t b;
 
    public:
 
    Arithmetic(t a,t b);
 
    t add();
 
    t sub();
 
       
};
 
template<class t>
 
Arithmetic<t>:: Arithmetic(t a,t b) //changes
 
{
 
    this->a=a;
 
    this->b=b;
 
}
 
template<class t>
 
t Arithmetic<t>::add(){
 
    t c;
 
    c=a+b;
 
    return c;
 
}
 
 
template<class t>
 
t Arithmetic<t>::sub(){
 
    t c;
 
    c=a-b;
 
    return c;
 
}
 
 
 
int main()
 
{
 
   Arithmetic<int> ar(10,5);
 
   cout<<"Add "<<ar.add()<<endl;
 
cout<<"Sub"<<ar.sub()<<endl;
 
    return 0;
 
}


