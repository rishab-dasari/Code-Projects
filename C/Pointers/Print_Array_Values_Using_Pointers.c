#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int Print_Arr(int *pointerArray)
{
    int *PointerForArray;
    PointerForArray = arr;
    int i; 
    for (i = 0; i < n; i++)
    {
        printf("value of m[0] is %d\n", *(PointerForArray + i));
    }
}

int main()
{
    int n;
    int i;
    printf("Enter the number of elements to be present in the array: ");
    scanf("%d", &n);
    int arr[n];
    int ele;
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &ele);
        arr[i] = ele;
    }
    printf("The values of the array are: ", Print_Arr(arr));
}