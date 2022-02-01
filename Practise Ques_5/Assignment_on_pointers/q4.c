//WAP to find the arithmetic mean of a given list of n real values using pointers.

#include <stdio.h >
#include <math.h>
int main()
{
    int a[20], n, i, sum = 0;
    float mean;
    int *ptr;
    printf("Enter number of elements: \n");
    scanf("%d", &n);

    printf("Enter the numbers: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        ptr++;
    }
    ptr = &a[0];
    printf("The elements in array are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", (*ptr));
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum / n;
    printf("Mean of %d numbers are: %f", n, mean);
    return (0);
}