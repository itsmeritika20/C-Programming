//Write a C program to concatenate two strings without using standard library function.//
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[50], str2[50], i, j;
    printf("Enter first string: \n");
    scanf("%s", str1);
    printf("Enter second string: \n");
    scanf("%s", str2);
    for (i = 0; str1[i] != '\0'; ++i)
        ;
    for (j = 0; str2[j] != '\0'; ++j, ++i)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    printf("\n output:%s", str1);
    return 0;
}