/*Write a C program to evaluate the series
S = 1+ (1/2) +…. +(1/N)*/

#include <stdio.h>
int main()
{
    float n, sum = 0;
    printf("Enter integer : ");
    scanf("%f", &n);
    while (n != 0)
    {
        sum += 1 / n;
        n--;
    }
    printf("Sum of series = %f", sum);
}