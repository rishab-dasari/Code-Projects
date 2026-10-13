#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int m, n, p, q, i, j,k;
    int ele;
    int arr1[m][n];
    int arr2[p][q];
    int prod[m][q];
    printf("Enter the dimensions of the first matrix [Rows][Columns]: \n");
    scanf("%d %d", &m, &n);
    prtinf("Enter the dimensions of the second matrix [Rows][Columns]: \n");
    scanf("%d %d", &p, &q);
    if (n == p)
    {
        printf("Matrix 1: \n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("Enter the element [%d][%d]: ", i, j);
                scanf("%d", &ele);
                printf("\n");
            }
        }

        printf("Matrix 2: \n");
        for(i = 0; i < p; i++)
        {
            for(j = 0; j < q; j++)
            {
                printf("Enter the element [%d][%d]: ", i, j);
                scanf("%d", &ele);
                printf("\n");
            }
        }

        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                prod[i][j] = 0;
                for(k = 0; k < n; k++)
                {
                    prod[i][j] = prod[i][j] + arr2[i][k] * arr2[k][j];
                }
            }
        }
        printd("The Product Matrix is: \n");
        for(i = 0; i < m; i++)
        {
            for(j = 0; j < n; j++)
            {
                printf("%d\t ", prod[i][j]);
                
            }
            printf("\n");
        }

    }
}