/*Write a C program to find the roots of a quadratic equation ax 2 + bx + c = 0 for all possible
combinations of a, b and c.*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, r1, r2;
    printf("Value of a : ");
    scanf("%lf", &a);
    printf("Value of b : ");
    scanf("%lf", &b);
    printf("Value of c : ");
    scanf("%lf", &c);
    r1 = (-1 * b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    r2 = (-1 * b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    printf("Roots are %lf and %lf", r1, r2);
}