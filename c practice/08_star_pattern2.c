#include <stdio.h>
int main()
{

    int g = 14;
    //i = row; j = coloumn//
    for (int i = 0; i < g; i++)
    {
        for (int j = 0; j < g; j++)
        {
            if (i+j>=g-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
                }
        printf("\n");
    }
    return 0;
}