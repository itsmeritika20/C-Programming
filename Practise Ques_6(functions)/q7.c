//Write a function to find the Fibonacci series using recursion.

#include <stdio.h>

int Fibonacci(int);

int main()
{
    int n, i = 0, c;

    printf("Enter the no. of Fibonacci series:");
    scanf("%d", &n);

    printf("Fibonacci series terms are:\n");

    for (c = 1; c <= n; c++)
    {
        printf("%d\n", Fibonacci(i));
        i++;
    }

    return 0;
}

int Fibonacci(int n)
{
    if (n == 0 || n == 1)
        return n;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}