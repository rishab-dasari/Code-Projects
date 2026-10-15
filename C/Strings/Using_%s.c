#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> //Include this header file string.h

int main()
{
    /*
    char array[10];
    printf("Enter the string array :  ");
    scanf("%s", array); //No need of & while reading;

    printf("String is %s. \n", array);
    */

    char array[10];
    printf("Enter the string array: \n");
    gets(array); // alternate for scan
    printf("The array is: ");
    puts(array); // alternate print
}

