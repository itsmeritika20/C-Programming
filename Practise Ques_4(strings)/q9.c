#include <stdio.h>
#include <string.h>
int main()
{
    char a[50], b[50];
    int i, j = 0;
    printf("Enter first string: \n");
    gets(a);
    printf("Enter second string: \n");
    gets(b);
    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] != b[i])
        {
            j = 1;
            break;
        }
    }
    if (j == 1)
    {
        printf("Strings are not same\n");
    }
    else
        printf("Strings are same\n");
    return 0;
}