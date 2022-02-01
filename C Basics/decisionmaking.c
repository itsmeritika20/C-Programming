#include<stdio.h>
int main()
{

//*******Decision Making in C*********//
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);
    if (age < 18)
    {
        printf("You can drive");
    }
    else if (age >= 18 && age <= 24)
    {
        printf("You are banned from driving");
    }
    else
    {
        printf("You can drive but drive carefully");
    }
    // Exercise: Tell me about Switch statement
    int i4 = age > 3 ? 100 : 200; //short hand if else
    printf(" %d ", i4);
return 0;

}
