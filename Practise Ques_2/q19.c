/*Write a C program to find the sum of all odd integers between 1 and n.*/
#include <stdio.h>
int main()
{
    int n, sum=0, count=1;
    printf("Enter a integer number\n");
    scanf("%d", &n);
    while (count <= n)
    {
        if (count%2 != 0)
        {
            sum = sum + count;
        }
        count++;
    }
    printf("Sum of odd integers: %d ", sum);
    return 0;
}