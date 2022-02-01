/*Write a C program to convert a binary number into a decimal number.*/
#include <stdio.h>
int main()
{
    int num, binary_num, decimal_num = 0, base = 1, rem;
    printf(" Enter a binary number with the combination of 0s and 1s : ");
    scanf(" %d", &num);
    binary_num = num;
    while (num > 0)
    {
        rem = num % 10;
        decimal_num = decimal_num + rem * base;
        num = num / 10;
        base = base * 2;
    }
    printf(" \n The decimal number is %d", decimal_num);
}