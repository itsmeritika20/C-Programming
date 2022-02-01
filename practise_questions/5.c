#include <stdio.h>

int main()
{
    int t, r;
    float p;
    printf("Enter initial balance:");
    scanf("%f", &p);
    printf("Enter annual interest rate:");
    scanf("%d", &r);
    printf("Enter time:");
    scanf("%d", &t);
    printf("simple interest rate is %f", (p * r * t)/100);
    return 0;
}