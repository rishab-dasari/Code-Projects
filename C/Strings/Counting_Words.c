#include <stdio.h>

int main() 
{
    char str[10000];
    int i, words = 0;

    printf("Enter a sentence: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ') 
        {
            words += 1;
        }
    }
    words += 1;
  
    printf("Total words = %d\n", words);

    return 0;
}
