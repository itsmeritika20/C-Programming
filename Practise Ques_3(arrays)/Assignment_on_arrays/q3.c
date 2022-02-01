/*Write a C program to find the arithmetic mean, variance and standard deviation any n values.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, k, array[100], sum = 0, sum1 = 0;
    float mean = 0.0, var = 0.0, sd = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter an element: ");
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
        mean = (float)sum / n;
    }
    printf("The sum of the elements in the array is %d\n", sum);
    printf("The mean of the elements in the array is %f\n", mean);

    for (k = 0; k < n; k++)
    {
        sum1 = sum1 + (mean - array[k]) * (mean - array[k]);
        var = sum1 / n;
        sd = sqrt(var);
    }
    printf("The variance is %f\n", var);
    printf("The standard deviation is %f", sd);
    return 0;
}