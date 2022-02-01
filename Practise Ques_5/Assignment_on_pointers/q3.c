//WAP that will swap the value of two integer variables passed as arguments.

#include <stdio.h>

void swap(int *p, int *q);

int main()
{
    int x, y;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Before swapping: x = %d and y = %d\n", x, y);
    
    swap(&x, &y);

    printf("After swapping: x = %d and y = %d\n", x, y);

    return 0;
}

void swap(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}
