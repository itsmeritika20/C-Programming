/*Write programs to print the following outputs:
1 1 1 1 1  
1 1 1 1 
1 1 1 
1 1
1*/

#include <stdio.h>
int main()
{
    int n = 1, col = 5, i = 0;
    while (col != 0)
    {
        printf("%d", n);
        i++;
        if (i == col)
        {
            printf("\n");
            col--;
            i = 0;
        }
    }
}