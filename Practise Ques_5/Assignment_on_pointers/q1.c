//WAP to find the sum of two values using pointers.

#include <stdio.h>
int main()
{
    int x, y, *p, *q, sum;

    printf("Enter two integers:\n");
    scanf("%d%d", &x, &y);

    p = &x;
    q = &y;

    sum = *p + *q;

    printf("Sum of the integers = %d\n", sum);

    return 0;
}