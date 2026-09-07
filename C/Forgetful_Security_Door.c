#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    const char *str = "NOVA42"; 
    char input[50];
    int count = 0;

    printf("Welcome To The Laboratory!\n");

    while (count < 3) {
        printf("Please enter the password: ");
        scanf("%49s", input);

        if (input == str) 
        {
            printf("ACCESS GRANTED\n");
            break;
        } else 
        {
            count++;
            printf("Wrong password! Attempts left: %d\n", 3 - count);
        }
    }

    if (count == 3) {
        printf("SYSTEM LOCKED\n");
    }

    return 0;
}
