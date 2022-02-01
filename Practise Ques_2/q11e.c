/*Write programs to print the following outputs:
*
* *
* * *
* * * *
* * * * *//


#include <stdio.h>
int main()
{
    int m = 5, i = 0, p = 0;
    char n = '*';
    while (p != m)
    {
        printf("%c", n);
        if (i == p)
        {
            printf("\n");
            p++;
            i = -1;
        }
        i++;
    }
}