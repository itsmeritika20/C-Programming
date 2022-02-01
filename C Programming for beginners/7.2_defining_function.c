//takes something,returns nothing//
#include <stdio.h>
#include <conio.h>
void main()
{
    int x, y;
    void add(int, int); //func declaration//
    clrscr();
    printf("enter two no.");
    scanf("%d%d", &x, &y);
    add(x, y); //Actual arguments : Call by value
}
void add(int a, int b) //Formal arguments
{
    int c;
    c = a + b;
    printf("sum is %d", c);
}