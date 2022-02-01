#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number of elements\n");
    float array[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter number: ");
        scanf("%f", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (array[0] < array[i])
        {
            array[0] = array[i];
        }
    }
    printf("The biggest number is %.2f", array[0]);

    return 0;
}

