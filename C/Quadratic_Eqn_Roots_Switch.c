# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() 
{
    printf("Welcome To The Quadratic Roots Using Switch Case Program!\n ");
    printf("A quadratic equation has the form: 'ax^2 + bx + c'\n");
    double a, b, c;
    double root1, root2;
    double real, imaginary;
    double discriminant;
    printf("Kindly Enter 'a': \n");
    scanf(" %lf", &a);
    printf("Kindly Enter 'b': \n");
    scanf(" %lf", &b);
    printf("Kindly Enter 'c': \n");
    scanf(" %lf", &c);
    discriminant = (b*b - 4*a*c);
    if(a == 0)
    {
        printf("Sorry, the value of a cannot be 0, please try again! ");
        return 0;
    }
    int Type = 0;
    if(discriminant == 0)
    {
        Type = 1;
    }
    else if(discriminant > 0)
    {
        Type = 2;
    }
    else
    {
        Type = 3;
    }
    
        switch(Type)
        {
            case 1: 
            {
                printf("Both The roots are real and equal!\n");
                root1 = (-b + sqrt(discriminant))/2*a;
                root2 = (-b - sqrt(discriminant))/2*a;
                printf("The roots of this quadratic equation are: %lf and %lf\n", root1, root2);
                break;
            }
            
            case 2:
            {
                printf("Both The roots are real but unequal!\n");
                root1 = (-b + sqrt(discriminant))/2*a;
                root2 = (-b - sqrt(discriminant))/2*a;
                printf("The roots of this quadratic equation are: %lf and %lf \n", root1, root2);
                break;
            }

            case 3:
            {
                printf("Imaginary roots!\n");
                real = (-b/2*a);
                imaginary = (discriminant/2*a);
                printf("The roots of this quadratic equation are: %lf and %lfi \n", real, imaginary);
                break;
            }
            
            default:
            {
                printf("Invalid Case!");
            }

        }
        return 0;
    }
