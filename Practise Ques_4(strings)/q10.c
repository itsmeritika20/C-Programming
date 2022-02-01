//Write a C program to find the length of a string without using standard library function.//
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], i;
    printf("Enter the string: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++);
    printf("Length of the string is %d", i);
    return 0;
}