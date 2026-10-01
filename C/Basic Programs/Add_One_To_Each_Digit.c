#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int num;
    printf("Please Enter a number: ");
    scanf("%d", &num);
    
    int digit;
    int num2 = 0;
    int place = 1; 
    
    while (num > 0)
    {
        digit = num % 10;
        digit += 1;
        
        if (digit == 10) digit = 0; 
        
        num2 = num2 + (digit * place); 
        place *= 10;                   
        num = num / 10;
    }
    
    printf("The new number is: %d\n", num2);
    return 0;
}
