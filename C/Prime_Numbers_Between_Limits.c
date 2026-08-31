#include <stdio.h>

int main()
{
    int start_lim, end_lim, i, j;

    printf("Enter starting limit: ");
    scanf("%d", &start_lim);
    printf("Enter ending limit: ");
    scanf("%d", &end_lim);

    i = start_lim;
    while (i <= end_lim)
    {
        if (i >= 2)
        {
            j = 2;
            while (j < i)
            {
                if (i % j == 0)
                    break; 
                j++;
            }
            if (j == i) 
                printf("%d ", i);
        }
        i++;
    }

    return 0;
}
