#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,i;
    printf("Welcome to the even odd with continue statement program!\n");
    printf("Enter the range till which you want to print the odd numbers: \n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d is an odd number\n", i);
        }
    }
    return 0;
}