/*Write a C program to sum the following series.
S = 1 + (1+2) + (1+2+3) + …. + (1+2+3+…+N)*/

#include <stdio.h>
int main()
{
    int n, i = 0, pre_sum = 0, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while (n != 0)
    {
        for (i = n; i != 0; i--)
        {
            pre_sum += i;
        }
        sum += pre_sum;
        pre_sum = 0;
        n--;
    }
    printf("The sum equals to : %d", sum);
    return 0;
}