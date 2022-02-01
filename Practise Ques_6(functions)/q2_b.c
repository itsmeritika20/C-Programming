//Using that function write a program to find the GCD of three integers.

#include <stdio.h>
void gcd(int num1, int num2, int num3);
int main()
{
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    gcd(x, y, z);
    return 0;
}
void gcd(int num1, int num2, int num3)
{
    int i, GCD;
    for (i = 1; i <= num1 && i <= num2 && i <= num3; i++)
        if (num1 % i == 0 && num2 % i == 0 && num3 % i == 0)
        {
            GCD = i;
        }
    printf("GCD of three numbers is %d", GCD);
}