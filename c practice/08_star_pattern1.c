

#include <stdio.h>
int main()
{
    int k;
    printf("Enter the value of k\n");
    scanf("%d", &k);
    for (int i = 1; i <= k; i++)
    {
        
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}