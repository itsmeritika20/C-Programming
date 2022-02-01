//Write a C program to find the number of words, characters in a given line.//
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    int i = 0, word = 0, chr = 0;
    printf("Enter any line: \n");
    gets(str);
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            word++;
            chr++;
        }
        else
            chr++;
        i++;
    }
    printf("Number of characters in the line: %d\n", chr);
    printf("Number of words in the line: %d", word + 1);
    return 0;
}