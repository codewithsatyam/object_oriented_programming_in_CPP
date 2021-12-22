//Illustrating the use of pointers.


#include <iostream>
using namespace std;
int main() 
{
  int num,*pnum;
  pnum=&num;
  cout<<"\nEnter the number :";
  cin>>*pnum;
  cout << "\nThe number that was entered :"<<*pnum;
  cout<<"\nThe address of number in memory is :"<<pnum;
 
} 
