#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    printf("Welcome To Your Account! \n");
    short int PIN;
    printf("Please Intialize A PIN For Your Account: \n");
    scanf("%hd", &PIN);
    double balance = 0.00; //Pre-defined
    int choice;
    printf("1. Check Balance \n");
    printf("2. Deposit Money \n");
    printf("3. Withdraw Money \n");
    printf("4. Exit \n");
    while (true)
    {
        printf("Please Enter Your Choice: \n");
        scanf("%d", &choice);
        int PinEnter;

        switch(choice)
        {
            case 1:
            {
                printf("Your Balance Amount Is: %lf \n", balance);
                break;
            }

            case 2:
            {
                double amntadd;
                printf("Please Enter The Amount You Would Like To Deposit: \n");
                scanf("%lf", &amntadd);
                printf("Please Enter The Pin: \n");
                scanf("%d", &PinEnter);
                if(PinEnter == PIN)
                {
                    balance += amntadd;
                    printf("The Amount Has Been Added Successfully. \nYour Balance Amount Is: %lf \n", balance);
                    break;
                }
                else
                {
                    printf("Wrong Pin, Please Try Again \n");
                    break;
                }
                break;
                
            }

            case 3:
            {
                double amntwithdraw;
                printf("Please Enter The Amount You Would Like To Withdraw: \n");
                scanf("%lf", &amntwithdraw);
                printf("Please Enter The Pin: \n");
                scanf("%d", &PinEnter);
                if(PinEnter == PIN)
                {
                    balance -= amntwithdraw;
                    printf("The Amount Has Been Deducted Successfully. \nYour Balance Amount Is: %lf \n", balance);
                    break;
                }
                else
                {
                    printf("Wrong Pin, Please Try Again");
                    break;
                }
            }

            case 4:
            {
                printf("Exiting... \n");
                return 0;
            }

            default:
            {
                printf("Invalid Case! \n");
                break;
            }
        }
    } 
    return 0;
}