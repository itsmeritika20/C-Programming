// calculate area of rectangle
#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Enter length of the rectangle:");
    scanf("%d", &length);
    printf("Enter breadth of the rectangle:");
    scanf("%d", &breadth);
    printf("Area of rectangle is %d", length * breadth);
    return 0;
}