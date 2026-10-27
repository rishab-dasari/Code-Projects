#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void pointerstoArray(int *a, int n)
{

}

int main()
{
    int a[2][3] = { {10, 20, 30}, {40, 50, 60}};
    int b =2;
    int *q;
    q = &b;
    int (*p)[3]; // datatype = *p [n]; Where n = no of columns.
    p =&a[0];
    printf("%p\n", (*(p+0) + 0)); // *(p+0) = get the address of the first row, first element...and then +0 = access element of the array...eg. a[0][0];
    printf("*(*(p+0)+ 0): %d\n", *(*(p+0)+0)); //    *(*(p+0)+0) = get the value of that particulat element
    return 0;

}

