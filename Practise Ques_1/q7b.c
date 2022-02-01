/*Rewrite the same program without using a third variable.*/

#include<stdio.h>
int main()
{
    int c,d;
    printf("Enter values of C and D:");
    scanf("%d %d",&c,&d);
    printf("The value of c before swaping is %d\n",c);
    printf("The value of d before swaping is %d\n",d);
    c = c+d;
    d = c-d;
    c = c-d;
    printf("The value of c after swaping is %d\n",c);
    printf("The value of d after swaping is %d\n",d);
    return 0;
}