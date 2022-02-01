/*The factorial of an integer m is the product of consecutive integers from 1 to m. That is m! = m x (m-1) x (m-2)x ….x 1.
Write a program that computes and prints a table of factorials for any given m*/
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int sum, i, m;
    printf("Enter the input number: ");
    scanf("%d", &m);
    sum = 1;
    for (i = m; i > 1; i--)
    {
        sum *= i;
    }
    printf("The result is %d", sum);
    return 0;
}