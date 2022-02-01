/*** C program to find sum of five digit number using loop***/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, a, b, c, d, e;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    e = num % 10;
    d = (num / 10) % 10;
    c = (num / 100) % 10;
    b = (num / 1000) % 10;
    a = (num / 10000) % 10;
    printf("%d is the sum of five digit number %d", a + b + c + d + e, num);
    getch();
    return 0;
}