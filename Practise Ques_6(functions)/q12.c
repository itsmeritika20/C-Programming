//Write a recursive function for computing the value of x^n for given values of x and n.
//Also write the main program.

#include <stdio.h>

int power(int x, int n);
int main()
{
    int x, n;
    printf("Enter the value of x and n:\n");
    scanf("%d%d", &x, &n);
    printf("x^n = %d", power(x, n));
    return 0;
}
int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n == 1)
        return x;
    else
        return x *power(x, n - 1);
}
