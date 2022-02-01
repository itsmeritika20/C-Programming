// celcius to farenheit
#include <stdio.h>

int main()
{
    float celcius;
    printf("Enter temperature in centigrade:");
    scanf("%f", &celcius);
    printf("Temperature in farenheit is %f", (9 / 5 * celcius) + 32);
    return 0;
}