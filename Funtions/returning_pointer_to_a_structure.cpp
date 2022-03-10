//Program to create object of type struct in heap and return its address using pointer.


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
 
struct rectangle {
int length ;
int breadth ;
};
 
 
struct rectangle *fun() ;
 
 
int main(){
struct rectangle *ptr = fun() ;
cout<<"Length = "<< ptr->length << "\t and \t Breatth = "<<ptr->breadth<<". \n\n" ;
 
delete ptr ;
ptr = nullptr ;
 
return 0;
}
 
 
struct rectangle *fun() {
// This function will dynamically create an object of type rectangle
 
// Using NEW operator
struct rectangle *p = new struct rectangle ; //pointer pointing to an object created in heap
 
// Using malloc
 
// Note that malloc returns a void pointer, which needs to be type casted into the type
// of pointer to which it is pointing, which in this case is "struct rectangle".
// struct rectangle *p2 = ( struct rectangle* ) malloc(sizeof(struct rectangle)) ;
 
p->length = 15 ;
p->breadth = 25 ;
 
return p;
}

/********************

output:
Length = 15      and     Breatth = 25. 

********************/
