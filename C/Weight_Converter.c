#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Welcome to the weight converter program!\n ");
    double weight;
    double pounds;
    printf("Please enter a weight in kg: \n");
    scanf(" %lf", &weight);    // Include the &, always forgets
    pounds = weight * 2.2;
    printf(" The weight in pounds is: %lf ", pounds);
    return 0;

}