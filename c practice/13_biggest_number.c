#include <stdio.h>

int main()
{
    int array[100], i, n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[0] < array[i])
        {
            array[0] = array[i];
        }
    }
    printf("The biggest number is %d", array[0]);

    return 0;
}