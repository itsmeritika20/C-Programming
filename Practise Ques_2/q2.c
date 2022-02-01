/* If a five digit number is input through keyboard write a program to reverse the number and to determine whether the original and reversed numbers are aqual or not*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num, n, r_num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while (num != 0)
    {
        r_num = r_num * 10;
        r_num = num % 10 + r_num;
        num = num / 10;
    }
    printf("Reversed number of %d is %d\n", n, r_num);
    if (n == r_num)
        printf("Input number %d & Reversed number %d are equal", n, r_num);
    else
        printf("Input number %d & Reversed number %d are not equal", n, r_num);
    return 0;
}