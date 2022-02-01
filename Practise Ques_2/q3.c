/*If a five digit number is input through keyboard write a program to obtain the sum of the first and last digit of this number*/
#include <stdio.h>
int main()
{
    int num, sum, a, b, c, d, e, e1, e2, e3, e4, e5;
    /*num=entered number, sum=sum of first and last digit, e1=first digit, e2=second digit, e3=third digit, e4=forth digit, e5=fifth digit*/
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    a = num / 10;
    e5 = num % 10;
    b = a / 10;
    e4 = a % 10;
    c = b / 10;
    e3 = b % 10;
    d = c / 10;
    e2 = c % 10;
    e = d / 10;
    e1 = d % 10;
    sum = e1 + e5;
    printf("Sum of first and last digit is %d", sum);
    return 0;
}
