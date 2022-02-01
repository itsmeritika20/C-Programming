// Write a C program to merge two arrays into a sorted third array.//
#include <stdio.h>
int main()
{
    int array1[100], array2[100], array3[100], m, n, i, j, k;

    printf("Enter no. of elements in first array:");
    scanf("%d", &m);
    printf("Enter elements:");
    scanf("%d", &array1[i]);

    printf("Enter no. of elements in second array:");
    scanf("%d", &n);
    printf("Enter elements: ", n);
    scanf("%d", &array2[j]);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (array1[i] > array2[j])
            {
                array3[k] = array2[j];
            }
            else
                array3[k] = array1[i];
        }
        printf("The third array is %d", array3[k]);
    }
}
