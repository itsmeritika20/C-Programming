/*Write programs to print the following outputs:
10 9 8 7 
6 5 4 
3 4
1*/
#include <stdio.h>
int main()
{
    int n = 10, col = 4, i = 0;
    while (col != 0)
    {
        printf("%d", n);
        n--;
        i++;
        if (i == col)
        {
            printf("\n");
            col--;
            i = 0;
        }
    }
}