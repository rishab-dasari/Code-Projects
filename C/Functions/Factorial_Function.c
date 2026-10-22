#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int factorial(int num)
{
    int i;
    int fact = 1;
    for(i = 1; i <= num; i++)
    {
        fact *= i;   
    }
    return fact;
}

int main()
{
    int number;
    int y;
    printf("Enter the number: ");
    scanf("%d", &number);
    y = factorial(number);
    printf("The factorial of the number is: %d ", y);
    return 0;
}