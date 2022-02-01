/*Write a C program to check whether the given number is an Armstrong number.
[Hint: An Armstrong number is one that is equal the sum of cubes individual digits. For
example, 153= 1 2 +2 2 +3 2 = 1+125+27 = 153 ]*/

#include <stdio.h>

void main()
{
     int num, r, sum = 0, temp;

     printf("Input  a number: ");
     scanf("%d", &num);

     for (temp = num; num != 0; num = num / 10)
     {
          r = num % 10;
          sum = sum + (r * r * r);
     }
     if (sum == temp)
          printf("%d is an Armstrong number.\n", temp);
     else
          printf("%d is not an Armstrong number.\n", temp);
}
