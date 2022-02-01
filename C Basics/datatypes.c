#include <stdio.h>
int main()
{
    // Single line comments: compiler will ignore this
    /*
    this is a multi
    line
    comment
    */
    // int, float, char

    int a1 = 7;                 // 2 to 4 bytes
    unsigned short integer = 8; // 2 bytes
    long integer1 = 8;          // 4 bytes
    short integer2 = 8;         // 2 bytes

    float b1 = 8.0;                    // 4 bytes - 6 decimal precision
    double myfloat1 = 7.45;            // 8 bytes - 15 decimal places precision
    long double myfloat2 = 7.43453455; // 10 bytes - 19 decimal places precision

    char c1 = 't'; // 1 byte
    printf("hello %c", c1);
    printf("The size taken by int is %d\n", sizeof(int));
    printf("The size taken by unsigned int is %d\n", sizeof(unsigned int));
    printf("The size taken by float is %d\n", sizeof(float));
    printf("The size taken by double is %d\n", sizeof(double));
    printf("The size taken by long double is %d\n", sizeof(long double));

    printf("\n*******Rules for creating variables*********");
    int harryName;   // This is variable declaration
    harryName = 76;  // This is variable initialization
    char five = '5'; // This is variable declaration and initialization

    const int i = 9;
    // i = 10;
    harryName = 98;

    printf("\n\n*******Types of operators in C*********");

    /*
    Arithmetic Operators
    Relational Operators
    Logical Operators
    Bitwise Operators
    Assignment Operators
    Misc Operators
   */