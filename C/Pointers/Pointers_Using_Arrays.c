#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    int m[5] = {10, 20, 30, 40, 50};
    int *pointerForArray;

    pointerForArray = m; 
    printf("value of m[0] is %d\n", *pointerForArray);
    printf("value of m[0] is %d\n", *(pointerForArray+1)); // Increment address to one position
    return 0;
}