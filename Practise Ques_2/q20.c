/*Write a program to determine the number of and sum of all integers greater than 100 and less
than 200 that are divisible by 7.*/
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 100;
    while (i < 200)
    {
        if (i % 7 == 0)
        {
            sum += i;
            n++;
        }
        i++;
    }
    printf("%d integers present and sum is %d", n, sum);
    return 0;
}