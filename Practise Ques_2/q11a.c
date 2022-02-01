/*Write programs to print the following outputs:
1 
1 1 
1 1 1 
1 1 1 1 
1 1 1 1 1*/
#include <stdio.h>

int main()
{
    int i, a = 0;
    for (i = 1; i <= 5; i++)
    {
        a = a * 10 + 1;
        printf("%d\n", a);
    }
    return 0;
}