//WAP using pointers to copy one string into another string.

#include<stdio.h>
#include<string.h>
int main()
{
    char source[100], target[100];
    char *s, *t;
    printf("Enter source string:");
    scanf("%s",source);
    s=source;
    t=target;
    while (*s)
    {
        *t = *s;
        s++;
        t++;
    }
    printf("After copy target string is %s:",target);

    return 0;
}