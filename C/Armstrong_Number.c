#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Welcome to the armstrong program!\n");
    printf("Enter the number: \n");
    scanf("%d", &num);
    int digit;
    int temp = num;
    int sum = 0;
    while (num > 0)
    {
        digit = num%10;
        sum += (digit*digit*digit);
        num /= 10;
    }
    if(sum == temp)
    {
        printf("This is an armstrong number \n");
    }
    else
    {
        printf("This is not an armstrong number \n");
    }
    return 0;
    
}