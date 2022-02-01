//A function that calls itself is known as a recursive function. And, this technique is known as recursion.
//The recursion continues until some condition is met to prevent it.
//To prevent infinite recursion, if...else statement (or similar approach) can be used where one branch makes the recursive call, and other doesn't.

#include <stdio.h>
int sum(int n);
int main()
{
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n)
{
    if (n != 0)
        // sum() function calls itself
        return n + sum(n - 1);
    else
        return n;
}
