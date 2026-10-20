#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Norm()
{
    double Norm;
    int n,m;
    printf("Enter the size of the array [Rows][Columns]: ");
    scanf("%d %d", &n, &m);
    int arr[n][m];
    
    printf("Input Elements Into The Array: \n");
    int i,j;
    int ele;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &ele);
            arr[i][j] = ele;
        }
    }

    printf("The Input Array Is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d\t", arr[i][j]);
        }
    }

    int Sum = 0;
    int element;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            element = arr[i][j];
            Sum += (element*element);
        }
    }

    Norm = sqrt((double)Sum);
    return Norm;
}

int main()
{
    printf("The Norm Of The Matrix Is: ", Norm());
    return 0;
}