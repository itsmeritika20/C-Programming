#include<stdio.h>
#include<conio.h>
int main(){
    int num[] = {1, 2, 3, 4, 5};
    int i;
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    printf("Sum of elements of array is %d\n", sum);
    return 0;
}   