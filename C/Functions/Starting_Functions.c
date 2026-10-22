#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

// Function Definition
/*
    ReturnTypee function_Name(Parameters)
    {
    // statements
    return
    }

    int main()
    {
        statements
        functions_Name();

        return 0;
    }
*/

void greetMessage()
{
    printf("Welcome To C Functions \n");
}

void someOtherFunction()
{
    greetMessage();
}

int main()
{
    greetMessage();
    someOtherFunction();
    return 0;
}
