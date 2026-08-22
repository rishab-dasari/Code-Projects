#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Welcome to the Grade evaluation using switch case program! \n");
    char Grade;
    printf("Please enter your grade \n");
    scanf(" %c", &Grade);
    switch(Grade)
    {
        case 'A':
        {
            printf("Outstanding!\n");
            break;
        }
        case 'B':
        {
            printf("Good!\n");
            break;
        }
        case 'C':
        {
            printf("Could Do Better!\n");
            break;
        }
        case 'D':
        {
            printf("Satisfactory!\n");
            break;
        }
        case 'E':
        {
            printf("Just Pass!\n");
            break;
        }
        case 'F':
        {
            printf("You have failed this subject!\n");
            break;
        }
        default:
        {
            printf("Invalid Grade\n");
            break;
        }
    }
    return 0;

}