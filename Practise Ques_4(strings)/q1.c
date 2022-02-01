//Write a C program to check whether a given string is palindrome or not.//

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    printf("Enter a string: ");
    gets(str);
    if(isPalindrome(str))
        printf("The string is Palindrome");
    else
        printf("The string is not palindrome");
}
int isPalindrome(char s[])
{
    int l, i;
    l = strlen(s);
    for (i = 0; i < l / 2; i++)
    {
        if (s[i] != s[l - 1 - i])
        return(0);
    }
    return(1);
}