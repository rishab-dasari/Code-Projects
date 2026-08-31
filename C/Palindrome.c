#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num;
    printf("Welcome to the palindrome program!\n");
    printf("Enter the number: \n");
    scanf("%d", &num);
    int digit;
    int temp = num;
    int rev = 0;
    while (num > 0)
    {
        digit = num%10;
        num /= 10;
        rev = rev*10 + digit;
    }
    if(rev == temp)
    {
        printf("This is a palindrome number \n");
    }
    else
    {
        printf("This is not a palindrome number \n");
    }
    return 0;
    
}