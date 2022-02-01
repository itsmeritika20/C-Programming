//takes nothing,returns nothing//
#include <stdio.h>
#include <conio.h>
void main()
{
    void add(void); //func declaration//
    add();          //func call//
    getch();
}
void add() //func definition//
{
    int a, b, c;
    printf("enter two no.");
    scanf("%d%d", &a, &b);
    c = a + b;
    printf("sum is %d", c);
}