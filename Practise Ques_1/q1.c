/*Write a C program that request two float type numbers from the user 
and then divides the first number by the second and display the result 
along with the numbers.*/

#include <stdio.h>
int main()
{
    float numb_1, numb_2, division;
    printf("Enter the first number:");
    scanf("%f", &numb_1);
    printf("Enter the second number:");
    scanf("%f", &numb_2);
    division = numb_1 / numb_2;
    printf("Division of %f and %f is %f", numb_1, numb_2, division);
    return 0;
}