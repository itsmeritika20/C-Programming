//The time at given point has three elements hours, minutes, seconds. Write a C program to
//add two times & use a function for that & return the result.

#include <stdio.h>
#include <conio.h>
#include <string.h>
typedef struct
{
    int h;
    int m;
    int s;
} time;
time add_time(time, time);
int main()
{
    time T1, T2, result;
    printf("Enter Time 1:\n");

    printf("Enter hour:");
    scanf("%d", &T1.h);
    printf("Enter minutes:");
    scanf("%d", &T1.m);
    printf("Enter seconds:");
    scanf("%d", &T1.s);

    printf("Enter Time 2:\n");

    printf("Enter hour:");
    scanf("%d", &T2.h);
    printf("Enter minutes:");
    scanf("%d", &T2.m);
    printf("Enter seconds:");
    scanf("%d", &T2.s);

    result = add_time(T1, T2);
    printf("After addition\n Hour=%d\n Min=%d\n Sec=%d", result.h, result.m, result.s);
    return 0;
}
time add_time(time T1, time T2)
{
    time sum;
    sum.s = T1.s + T2.s;
    sum.m = T1.m + T2.m;
    sum.h = T1.h + T2.h;

    while (sum.s >= 60)
    {
        sum.s -= 60;
        sum.m++;
    }
    while (sum.m >= 60)
    {
        sum.m -= 60;
        sum.h++;
    }
    return sum;
}