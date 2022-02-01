//WAP using pointers to find the biggest of three given numbers.

#include <stdio.h>

int main()
{
    int a, b, c, *p, *q, *r;

    printf("Enter three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);

    p = &a;
    q = &b;
    r = &c;
    
    if (*p > *q && *p > *r)
    {
        printf("Largest number is: %d", *p);
    }
    else if (*q > *p && *q > *r)
    {
        printf("Largest number is : %d", *q);
    }
    else
    {
        printf("Largest number is: %d", *r);
    }
    return 0;
}