//takes nothing returns something//
#include <stdio.h>
#include <conio.h>
int add(void);
void main()
{
    int s;
    s = add();
    printf("sum is %d", s);
}
int add()
{
    int a, b, c;
    printf("enter two no.");
    scanf("%d%d", &a, &b);
    c = a + b;
    return (c);
}