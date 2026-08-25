#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1, b = 2, c = 0;
    int res = (a++, b += a, c = b);
    printf("Before: a=%d b=%d c=%d\n", a,b,c);
    int resultNew = (a++, b += a, c = b, c++);
    printf("After: a=%d b=%d c=%d\n", a,b,c);
    printf("result=%d\n", res);
    printf("ResultNew = %d\n", resultNew);
    return 0; 
}