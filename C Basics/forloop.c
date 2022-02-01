#include<stdio.h>
int main()
{
int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }

    for(int j = 0; j < 67; j++)
    {
        printf("%d\n", j);
    }

    do
    {
        printf("do while loop is running");
    } 
    while (j > 65656);
    printf("\n do while loop is running");
    return 0;
}
