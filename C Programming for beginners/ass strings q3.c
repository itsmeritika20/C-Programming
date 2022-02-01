#include <stdio.h>
int reverse(int);
int main()
{
    int i,result;
    printf("Enter any integer:");
    scanf("%d", &i);
    result=reverse(i);
    printf("Reverse is %d", result);
    return 0;
}
int reverse(int i)
{
    int rev = 0;
    while (i > 0)
    {
        rev = (rev * 10) + i % 10;
        i = i / 10;
    }
    return(rev);
}