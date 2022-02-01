/*Write a C program to print integers from 1 to n omitting those integers which are divisible by 7*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int i, n;
    printf("Ente the limit: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            continue;
        }
        printf("%d", i);
    }
}