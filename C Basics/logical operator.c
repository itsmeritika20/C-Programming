#include<stdio.h>
int main()
{
    // Logical Operators//
    int h = 0, j = 1;
    printf("The logical operator returned %d\n", h && j);
    printf("The logical operaTor returned %d\n", h || j);
    printf("The logical operator returned %d\n", !j);
    printf("The logical operator returned %d\n", !h);
}
//As we know from TRUTH TABLE //
//0 & 1 = 0
//0 or 1= 1
//not(!) of 1= 0
//not(!) of 0= 1//