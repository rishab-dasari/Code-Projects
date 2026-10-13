#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the size of your array [Rows][Columns]: ");
    scanf("%d %d", &m, &n);

    int arr[m][n];  
    int i, j, sum;


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Sum of each row
    for (i = 0; i < m; i++) {
        sum = 0;   
        for (j = 0; j < n; j++) {
            sum += arr[i][j];
        }
        printf("The sum of row [%d] is: %d\n", i, sum);
    }

    for (j = 0; j < n; j++) {
        sum = 0;  
        for (i = 0; i < m; i++) {
            sum += arr[i][j];
        }
        printf("The sum of column [%d] is: %d\n", j, sum);
    }

    return 0;
}
