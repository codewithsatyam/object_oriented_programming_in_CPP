//Program to create a dynamic array in heap and return a pointer pointing to it.

#include<iostream>
using namespace std;
int * fun(int);
int *fun(int n)
{ 
  int *p;
  p= new int[n];
  for(int i=0;i<n;i++)
     p[i]=i+1;
     return p;
}
int main() {
int *A;
int n=5;
A=fun(n);
for(int i=0;i<n;i++)
  cout<<A[i]<<" ";
  return 0;
}


