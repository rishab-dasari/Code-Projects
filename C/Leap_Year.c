// 2020, 2024, 2023, 1900, 2000, 2100, 2400, 2004, 1800, 2025   

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("Welcome to the leap year program! \n");
    int Year;
    while (1)
    {
        printf("Please Enter The Year: \n");
        scanf("%d", &Year);
        if((Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0))
        {
            printf("This is a leap year!\n");
            
        }
        else
        {
            printf("This is not a leap year!\n");
            
        }

    }
   
    return 0;
}