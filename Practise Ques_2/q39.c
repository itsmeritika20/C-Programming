/*Write a C program to generate all combinations of 1,2, and 3 using for loop.*/

#include <stdio.h>
int main()
{
    int i, j, k;
    printf("Possible combinations are : ");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 2; j++)
        {
            for (k = 1; k <= 1; k++)
            {
                printf("%d%d%d, ", i, j, k);
            }
        }
    }
}