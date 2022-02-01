/*Write programs to print the following outputs:
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>
int main()
{
    int j = 5, i = 0;
    char n = '*';
    while (j != 0)
    {
        printf("%c", n);
        i++;
        if (i == j)
        {
            printf("\n");
            j--;
            i = 0;
        }
    }
}