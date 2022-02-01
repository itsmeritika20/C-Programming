/*Write a C program to print all prime numbers between1 to 100.*/

#include <stdio.h>
int main()
{
    int i, j, n, divcount;
    n = 100;
    for (i = 2; i < n; i++)
    {
        divcount = 0;
        if (i < 10)
        {
            for (j = 1; j < 10; j++)
            {
                if (i % j == 0)
                {
                    divcount++;
                }
            }
            if (divcount == 2)
            {
                printf("%d, ", i);
            }
        }
        else
        {
            for (j = 1; j < 10; j++)
            {
                if (i % j == 0)
                {
                    divcount++;
                }
            }
            if (divcount == 1)
            {
                printf("%d, ", i);
            }
        }
    }
}