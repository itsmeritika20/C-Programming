//Write a C program to add two matrices of order m x n.//

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;

    printf("Enter values of first matrix: ");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter values of second matrix: ");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The sum of first and second matrices is %d\n");
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
}
