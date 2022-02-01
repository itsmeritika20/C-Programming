#include<stdio.h>
//iterative approach//
int factorialIterative(int n){
    int val = 1;
    for (int i = n; i > 1; i--)
    {
        val *= i;
    }
    return val;
}


int main(){
    int n;
    printf("Enter the value of number for factorial caculation\n");
    scanf("%d", &n);
    int factorial = factorialIterative(n);
    printf("The value of factorial is %d\n", factorial);
    return 0;
}