//WAP using pointers to copy one string into another string.

#include <stdio.h>

void copystring(char *, char *);
int main()
{
    char a[100], b[100]; //a=source string b=target string
    printf("Enter any string: ");
    scanf("%s", a);

    copystring(b, a);
    printf("The target string is %s\n", b);
    return 0;
}
void copystring(char *b, char *a)
{
    while (*a)
    {
        *b = *a;
        a++;
        b++;
    }
    *b = '\0';
}