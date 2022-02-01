/*Write a C program to check whether the given number n is a prime number.*/

#include <stdio.h>
int main()
{
    int n;
    printf("Value of n: ");
    scanf("%d", &n);
    if (n != 0 || n != 1)
        if (n != 0 || n % 3 != 0 || n % 5 != 0 || n % 7 != 0 || n == 2 || n == 3 || n == 5 || n == 7)
        {
            printf("%d is a prime a number", n);
        }
        else
        {
            printf("%d is not a prime number", n);
        }
}