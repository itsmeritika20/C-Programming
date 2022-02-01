#include <stdio.h>
union Item
{
    int x;
    float y;
    char z;
};
void main()
{
    union Item i1;
    i1.x = 5;
    printf("\nx=%d", i1.x);
    i1.y = 3.4;
    printf("\ny=%f", i1.y);
    i1.z = 'a';
    printf("\nz=%c", i1.z);
}