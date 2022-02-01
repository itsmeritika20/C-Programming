#include <stdio.h>

int main()
{
    int marks;
    printf("enter your marks:");
    scanf("%d", &marks);
    if (marks > 90)
        printf("A");
    else if (marks > 80)
        printf("B");
    else if (marks > 70)
        printf("C");
    else
        printf("D");
    return 0;
}