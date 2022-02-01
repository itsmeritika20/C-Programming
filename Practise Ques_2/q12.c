/*Write a program a if a input character is in lowercase then convert that character in uppercase
and vice-versa.*/

#include <stdio.h>
int main()
{
    char n;
    printf("Enter lower case char: ");
    n = getchar();
    printf("Uppercase: %c", n - 32);
}

