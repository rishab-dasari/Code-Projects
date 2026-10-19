#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    //strlen() ---> Finds the length of the string (Won't consider the null character)
    char string [10] = "HELLO";
    int n;
    n = strlen(string);

    //strcpy() ---> copies one string to another. E.g strcpy(Dstr1, Sstr2) --> (This will copy the null value)

    //strcmp() ---> compares the two strings. E,g strcmp(str1,str2) 
    // negative = length of str1 < str2 ---> strings not equal
    // positive = length of str1 > str2 ---> strings not equal

    //strcat() ---> concatenate the two strings. E.g strcat(str1,str2) 

}