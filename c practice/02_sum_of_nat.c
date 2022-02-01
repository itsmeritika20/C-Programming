#include<stdio.h>

int main(){
    int n, sum=0;
    printf("Enter the last natural number you want the sum of \n");
    scanf("%d",&n);
    // Runs in constant time//
    sum = n*(n+1)/2;
    printf("Sum of first %d natural number is : %d", n, sum);
    return 0;
}