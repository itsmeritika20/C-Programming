/*Write a program to print n Fibonacci numbers.*/
#include <stdio.h>
int main()
{
    int n, i, fib1 = 0, fib2 = 1, fib3;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        fib3 = fib1 + fib2;
        printf("%d", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }
    printf("The value is %d");
}