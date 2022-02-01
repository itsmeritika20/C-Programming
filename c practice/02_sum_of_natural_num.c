#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the last natural number you want the sum of \n");
    scanf("%d",&n);
    // Sum 1+2+3+4+5+...+n //
    // Runs in linear time//
    for (int i = 0; i <= n; i++)
    {
        sum+=i;
    }
    printf("Sum of first %d natural number is : %d", n, sum);
    return 0;
}