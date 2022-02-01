/*Two numbers are input through the keyboard into two locations C and D. Write a C
program to interchange the contents of C and D using a third variable.*/

#include<stdio.h>
int main()
{
    int c,d,temp;
    printf("Enter values of C and D:");
    scanf("%d %d",&c, &d);
    printf("The value of c before swaping is %d\n",c);
    printf("The value of d before swaping is %d\n",d);
    temp = c;
    c = d;
    d = temp;
    printf("The value of c after swaping is %d\n",c);
    printf("The value of d after swaping is %d\n",d);
    return 0;
}