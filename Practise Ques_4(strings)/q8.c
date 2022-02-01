//Write a C program to reverse a given string.//
#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], ch;
    int i, j;
    printf("Enter a string: \n");
    gets(s);
    for (i = 0; s[i]; i++);
        for (j = 0; j < i / 2; j++)

        {
            ch = s[j];
            s[j] = s[i - 1 - j];
            s[i - 1 - j] = ch;
        }
    printf("Reverse is %s\n",s);
    return 0;
}