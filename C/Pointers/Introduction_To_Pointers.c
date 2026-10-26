/* 
    Why are we studying pointers?
    Ans - Memory storage exact, or dynamically change and store memory
    So a pointer is a variable that will store the address of another variable


    Syntax:- 
    int float, char dataType  *Variable name
    normal declaration = int a;
    pointer variable = *p;
    p = &a;


*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int a = 20; // normal variable
    int *p; // pointer variable
    
    p = &a; //Assign address of a to p
    printf("a value is %d\n", a);
    printf("address of a is %p\n", (void*)p);  //best practice whenever using %p , then use void*
    printf("&a value is: %p\n", &a); // confirming address
    printf("address p has a value of: %d\n", *p); // printing value from an address
    return 0;
}