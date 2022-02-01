/*If the three sides of a triangle are entered through the keyboard, write a program to check
whether the triangle is isosceles, equilateral, scalene or right angled triangle.*/
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, flag = 0;

    printf("Enter values for three sides(eg: a b c) : ");
    scanf("%f%f%f", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("An Equilateral Triangle");
    }
    else if (a == b || a == c || b == c)
    {
        printf("An Isosceles Triangle");
    }
    else if ((a = sqrt(pow(b, 2) + pow(c, 2))) ||
             (b = sqrt(pow(a, 2) + pow(c, 2))) ||
             (c = sqrt(pow(b, 2) + pow(a, 2))))
    {
        printf("A Right angle Triangle");
    }
    else
    {
        printf("A scalene Triangle");
    }
}