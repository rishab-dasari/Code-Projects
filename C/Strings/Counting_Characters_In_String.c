#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int i = 0;
    int count = 0;
    char array[10];
    printf("Enter the string array: \n");
    gets(array);
    while (array[i] != '\0') // '\0' = null
    {
        count++;
        i++;
    }
    printf("The number of characters in the string is: ", count);
}