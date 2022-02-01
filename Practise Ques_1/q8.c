/*The length &amp; breadth of a circle are input through the keyboard. Write a C program
to calculate the area &amp; perimeter of the rectangle, and the area &amp; circumference of
the circle.*/

#include<stdio.h>
int main()
{
    float length,breadth,radii,a,b,c,d;
    printf("Enter length and breadth of rectangle\n");
    scanf("%f%f",&length,&breadth);
    printf("Enter radius of a circle\n");
    scanf("%f",&radii);

    a = length*breadth;
    b = 2*(length+breadth);
    c = 3.14*radii*radii;
    d = 2*3.14*radii;

    printf("The area of a rectangle is %.2f\n",a);
    printf("The perimeter of a rectangle is %.2f\n",b);
    printf("The area of a circle is %.2f\n",c);
    printf("The circumference of a circle is %.2f\n",d);
    return 0;
}