/*Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a
C program to convert this temperature into centigrade degrees.*/

#include<stdio.h>
int main()
{
    float F, C;
    printf("Enter the temperature of a city in Farenheit");
    scanf("%f",&F);
    C = (F-32)*5/9;
    printf("The temperature in Centigrade is %.2f",C);
    return 0;
}