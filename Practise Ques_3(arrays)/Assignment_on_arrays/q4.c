//Write a C program to sort a set of n numbers in ascending order.//

#include <stdio.h>
#include <conio.h>
int main()
{
    int array[100], i, n, step, temp;
    printf("Enter the number of elements to be sorted: ", i + 1);
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        printf("Enter an element: ");
        scanf("%d", &array[i]);
    }
    for (step = 0; step < n - 1; ++step)
        for ( i = 0; i < n - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    printf("In ascending order: ");
    for (i = 0; i < n; ++i)
    {
        printf("%d  ", array[i]); 
    }
    return 0;
}