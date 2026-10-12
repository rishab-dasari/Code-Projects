#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[3][3]; // type name [rows][columns];
    // we can also do int arr[optional][mandatory] 
    int i,j;
    for(i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
      {
            printf("Enter The Element [%d] [%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("The matrix values are: \n");
    for (i = 0; i<3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d\t ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}