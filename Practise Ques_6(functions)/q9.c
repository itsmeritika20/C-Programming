//Write a C program to solve the problem The Tower of Hanoi.

#include<stdio.h>
int main()
{
    void tower(char, char, char, int);
    int n;
    char from,to,use;
    printf("enter no. of disks: ");
    scanf("%d",&n);
    if(n<1)
    {
        printf("Can't be possible");
    }
    else
    {
        tower('A', 'C', 'B', n);
    }
}
void tower(char from, char to, char use, int n)
{
    if (n==1)
    {
        printf("Move disk from %c to %c",from,to);
    }
    else
    {
        tower(from,use,to,n-1);
        tower(from,to,use,1);
        tower(use,to,from,n-1);
    }
}