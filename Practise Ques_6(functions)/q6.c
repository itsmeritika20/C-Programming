//Write a function to find the factorial using recursion.

#include <stdio.h>
int num(int n);
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, num(n));
    return 0;
}

int num(int n)
{
    if (n >= 1)
        return n * num(n - 1);
    else
        return 1;
}
