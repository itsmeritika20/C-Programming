//WAP using pointers to read an array of integers and print its elements in the reverse order.

#include <stdio.h>

int main()
{
    int a[20], n, i, *ptr;

    printf("Enter size of an array:\n");
    scanf("%d", &n);
    printf("Enter integers:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    ptr = &a[n - 1];
    printf("In reverse order:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *ptr--);
    }
    return 0;
}