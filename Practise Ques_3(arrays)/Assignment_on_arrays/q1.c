/*Write a C program to find the sum of the given n integers using an array.*/

#include <stdio.h>
int main()
{
    int array[100], n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the element: \n");
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum of array elements is %d", sum);
    return 0;
}