#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int marks1 [5];
    printf("%d", marks1);

    int marks2 [5] = {10, 20, 30, 40, 50};
    int i;
    for (i = 0; i < 5; i++)
        printf("%d", marks2[i]);
    
    int marks3 [] = {10, 20, 30};
    for (i = 0; i < sizeof(marks3)/sizeof(marks3[0]) ; i++)
        printf("%d", marks3[i]);

    int marks4 [5] = {10, 20, 30};
    for (i = 0; i < sizeof(marks4)/sizeof(marks4[0]) ; i++)
        printf("%d", marks4[i]);
    
    int marks5[5] = {0};
    for (i = 0; i < sizeof(marks5)/sizeof(marks5[0]) ; i++)
        printf("%d", marks5[i]);

    return 0;

    // scanf format:

    // scanf("%d", &marks[i]);

}