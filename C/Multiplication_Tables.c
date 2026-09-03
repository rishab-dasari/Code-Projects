#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Welcome To The Tables Program\n");
    printf("Enter the number for which you want to print the table: ");
    
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }

    return 0;
}
