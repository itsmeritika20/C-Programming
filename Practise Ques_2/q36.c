/*If the three sides of a triangle are entered through the keyboard, write a program to check
whether the triangle is valid or not. That triangle is valid if the sum of two sides is greater than
the largest of the three sides.*/
#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle(eg:side1 side2 side3) : ");
    scanf("%d %d %d", &side1, &side2, &side3);

    if ((side1 + side2) > side3)
    {
        if ((side2 + side3) > side1)
        {
            if ((side1 + side3) > side2)
            {
                printf("Triangle is valid.");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
}