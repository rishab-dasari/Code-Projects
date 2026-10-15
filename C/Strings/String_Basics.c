#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    char array[10] = "HELLO";
    //or
    //char array[10] = {'H', 'E', 'L', 'L', 'O'};

    //printf("%s", array); //%s is for printing directly
    for(i = 0; i < 6; i++)
    {
        printf("%c", array[i]);
    }
} 