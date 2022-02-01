#include<stdio.h>
int main()
{
    // Bitwise Operators
    // A = 60 B=13
    // A = 00111100
    // B = 00001101
    // R = 00001100
    int A = 60, B = 14;
    printf("Bitwise and operator returned %d\n", A & B);
    printf("Bitwise or operator returned %d\n", A | B);
    printf("Bitwise xor operator returned %d\n", A ^ B);
    printf("Bitwise ones complement operator returned %d\n", ~B);
    printf("Bitwise left shift operator operator returned %d\n", A << B);
    printf("Bitwise right shift operator operator returned %d\n", A >> B);
}