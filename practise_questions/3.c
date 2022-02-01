// volume of a cylinder
#include <stdio.h>

int main()
{
    int radius, height;
    printf("Enter radius of circle:");
    scanf("%d", &radius);
    printf("Enter height of circle:");
    scanf("%d", &height);
    printf("Volume is %f", 3.14 * radius * radius * height);
    return 0;
}