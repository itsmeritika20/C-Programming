//WAP to add two matrices using pointers.

#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], c[3][3], i, j, m, n;
    printf("Enter row & column:");
    scanf("%d %d", &m, &n);

    printf("Enter 1st matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", (*(a + i) + j));
    
    printf("Enter 2nd matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", (*(b + i) + j));

    printf("Sum of two Matrix:\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
        {
            *(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
            printf("%d\n", *(*(c + i) + j));
        }
        printf("\n",*(*(c + i) + j));
}
