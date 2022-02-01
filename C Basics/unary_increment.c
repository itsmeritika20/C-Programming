//++ increment operator

#include <stdio.h>
int main()
{
    int x = 3;
    x++; //x=x+1 Post increment
    printf("%d", x);
    ++x; //x=x+1 Pre increment
    printf("%d", x);
    return 0;
}