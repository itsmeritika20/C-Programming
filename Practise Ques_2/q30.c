/*Write a C program to test whether a given number is palindrome number.(Ex. 12321 is a
palindrome number.)*/
#include <stdio.h>
int main()
{
    int n, tmp, rev = 0;
    printf("Enter Integer : ");
    scanf("%d", &n);
    tmp = n;
    while (tmp != 0)
    {
        rev = rev * 10 + tmp % 10;
        tmp /= 10;
    }
    if (n == rev)
    {
        printf("This is a Palindrome number");
    }
    else
    {
        printf("This is not a palindrome number");
    }
}