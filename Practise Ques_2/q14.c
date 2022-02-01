/*z is to computed as a function of x and y according to z=3x 2 + 2y 2 – 25.5. Compute the values z
as x varies from -1.5 to 1.5 in increments of 0.5 and y varies from 0 to 3 in steps to 1. Write a
C program to compute z for all pairs of (x, y ).*/

#include <stdio.h>
#include <math.h>
int main()
{
    float z, x, y;
    for (x = -1.5; x <= 1.5; x = (x + 0.5))
    {
        for (y = 0; y <= 3; y++)
        {
            z = 3 * pow(x, 2) + 2 * pow(y, 2) - 25.5;
            printf("x = %f, y = %f and z = %f \n", x, y, z);
        }
    }
}
