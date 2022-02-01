#include<stdio.h>

int main(){
    int income;
    float tax;
    printf("Enter income:");
    scanf("%d", &income);
    if (income<250000)
    {
        printf("No tax for you!");
    }
    else if(income<500000 && income>250000)
    {
        printf("income is between 2.5 and 5 lakhs");
        tax = tax + 0.05*(income-250000)
    }
    else if(income<1000000 && income>500000)
    {
        printf("income is between 5 and 10 lakhs");
        tax = tax + 0.02*(income-500000)
    }
    else
    {
        printf("income is above 10 lakhs");
    }
    
    return 0;
}