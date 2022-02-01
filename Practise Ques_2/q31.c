/*Any character is entered through the keyboard, write a program to determine whether the
character entered is a capital letter, a small case letter, a digit or a special symbol.
The following table shows the range of ASCII values for various characters.
Characters               ASCII Values
A – Z                    65-90
a – z                    97 – 122
0 – 9                    48 – 57
Special symbols          0 – 47,58 - 64,91 – 96, 123 - 127 */

#include <stdio.h>
int main()
{
    char input;
    printf("Enter Input : ");
    input = getchar();
    if (input >= 65 && input <= 90)
    {
        printf("Uppercase");
    }
    else if (input >= 97 && input <= 122)
    {
        printf("lowercase");
    }
    else if (input >= 48 && input <= 57)
    {
        printf("Numbers");
    }
    else
    {
        printf("Special Symbol");
    }
}
