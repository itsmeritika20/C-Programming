#include <stdio.h>
int main()
{
    int array[100], n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element: ");
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum of array elements is %d", sum);
    return 0;
}