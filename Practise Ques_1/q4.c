/*The price of one kg of rice is RS. 16.75 and one kg of sugar is RS 15. Write a C
program to get these values from the nuser and display the prices as follows :
**LIST OF VALUES**
Item Price
Rice Rs. 16.75
Sugar Rs. 15.00*/

#include<stdio.h>
int main()
{
    float a,b;
    printf("Enter the price of one kg rice\n");
    scanf("%f",&a);
    printf("Enter the price of one kg sugar\n");
    scanf("%f",&b);
    printf("**LIST OF VALUES**\n");
    printf("Item\t   Price\n");
    printf("Rice\t  Rs %.2f\n",a);
    printf("Sugar\t Rs %.2f\n",b);
    return 0;
}