//WAP to store a character string in a block of memory space created by malloc and then
//modify the same to store a large string.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char *p;
    printf("Enter size of the string:");
    scanf("%d", &n);

    p = (char *)malloc(n * sizeof(char));
    printf("Enter a string:\n");
    scanf("%s", p);

    printf("The string is %s", p);
    free(p);
    return 0;
}