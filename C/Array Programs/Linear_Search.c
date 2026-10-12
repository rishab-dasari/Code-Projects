#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter the number of elements that you want in the array: ");
    scanf("%d", &n);
    int arr[n];
    int ele;
    int search;
    int i,j;
    for (i = 0; i< n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &ele);
        printf("\n");
        arr[i] = ele;
    }

    printf("Enter the element you want to search: ");
    scanf("%d", &search);

    for(j = 0; j <n; j++)
    {
        if(arr[j] == search)
        {
            printf("Element found at position %d", j);
            break;
        }
        else
        {
            printf("Element not found");
        }
    }
    
    return 0;

}
