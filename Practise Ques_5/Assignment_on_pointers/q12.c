//WAP to store ten integer elements dynamically.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, *ptr = 0, n = 0;
    printf("Enter number of elements:");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));
    printf("Enter elements:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &ptr[i]);
    }

    printf("\nArray elements are: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;
}