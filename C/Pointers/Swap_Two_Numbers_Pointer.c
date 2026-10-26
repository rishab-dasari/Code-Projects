#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("x = %d and y = %d\n", x,y);
}
*/
/*
int main()
{
    int a = 2; 
    int b = 3;
    swap(a,b);
    printf("a = %d and b = %d\n", a,b);
    return 0;
}
*/
// Why is there no swap in the main function originally?
// Because the values in the main functions after passing to the function, return a value, but the original values are not changed.

// Now let's use pointers 

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("x = %d and y = %d\n", *x,*y);
}

int main()
{
    int a = 2; 
    int b = 3;
    swap(&a,&b);
    printf("a = %d and b = %d\n", a,b);
    return 0;
}

