//Write a function to find the factorial of a given integer and use it to find nCr.

#include <stdio.h>
int fact(int);
void main()
{
    int n, r, ncr;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("Enter the value of r\n");
    scanf("%d", &r);
    ncr = fact(n) / (fact(r) * fact(n - r));
    printf("Value of C(%d,%d) = %d\n", n, r, ncr);
}

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}