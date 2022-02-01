#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num;
    srand(time(0));
    num = rand()%100+1;//rand() function is used to generate random numbers
    printf("The number is %d",num);
    return 0;
}