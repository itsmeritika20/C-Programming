/*Write a C program to read the price of an item in decimal form 
(like 15.95) and print the output in paise(like 1595 paise).*/

#include <stdio.h>
int main()
{
    int b;
    float a;
    printf("Enter the rupees: ");
    scanf("%f", &a);
    b = a*100;
    printf("The price is %d paise", b);
    return 0;
}