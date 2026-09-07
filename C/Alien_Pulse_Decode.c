#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Input A Number To Code It In Alien Language: ");
    int input;
    int digit;
    int i;
    scanf("%d", &input);
    while (input > 0)
    {
        digit = input%10;
        if (digit == 0)
        {
            printf("Silence");
        }
        else
        {
            for (i = 0; i < digit; i++)
            {
                printf("*");
            }
        }
        printf("\n");
        input /= 10;
    }
}