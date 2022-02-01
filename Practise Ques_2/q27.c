/*Write a C program to print multiplication table from 1 to 5 up to 10 numbers.*/
#include <stdio.h>
int main()
{
    int n, i;
    for (n = 1; n <= 5; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d \n", n, i, n * i);
        }
    }
}