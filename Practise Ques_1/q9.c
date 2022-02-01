/*If the marks obtained by a student in five different subjects are input through the
keyboard, find out the aggregate marks and percentage marks obtained by the
student.*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float percentage;
    printf("Enter the marks of a: ");
    scanf("%d",&a);
    printf("Enter the marks of b: ");
    scanf("%d",&b);
    printf("Enter the marks of c: ");
    scanf("%d",&c);
    printf("Enter the marks of d: ");
    scanf("%d",&d);
    printf("Enter the marks of e: ");
    scanf("%d",&e);

    total = a+b+c+d+e;
    percentage = (total/5);

    printf("\n Aggregate marks: %d",&total);
    printf("\n Percentage marks: %f",&percentage);
    return 0;
}