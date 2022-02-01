#include <stdio.h>

int main()
{
    int n, counter = 0;
    printf("Enter a number\n");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("There is only 1 digit in your number", counter);
    }
    else
    {
        while (n != 0)
        {
            n = n / 10; //n/=10
            counter++;
        }
        printf("There are %d digits in your number", counter);
        return 0;
    }

    return 0;
}