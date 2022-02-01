// #include <stdio.h>

// int main()
// {
//     int x = 5;
//     printf("%d\n", x);
//     printf("%d", &x);
//     printf("%d", *&x);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int x = 5;
    int *j;
    printf("%d%u\n", x,j);
    printf("%d%u", *j, &x);
    printf("%d%u", *&j);
    return 0;
}