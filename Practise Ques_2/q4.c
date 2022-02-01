/*Any integer is input through the keyboard. Write a program to determine whether it is an odd
number or even number.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is even", num);
    else
        printf("%d is odd", num);
    return 0;
}