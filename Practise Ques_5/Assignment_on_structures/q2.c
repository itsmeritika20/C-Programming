//Write a C program to input information about students in a class, given the following roll,
//name, total marks. The program should output marks of specified student given his/her roll no.

#include <stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    int roll;
    float marks;
}s[20];
int main()
{
    int i, n;

    printf("Enter information about students in a class:\n");
    printf("Enter how many students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        s[i].roll = i+1;
        printf("Enter name:");
        scanf("%s", s[i].name);
        printf("Enter roll:");
        scanf("%d", &s[i].roll);
        printf("Enter total marks:");
        scanf("%f", &s[i].marks);
    }

        printf("Displaying information:\n");
    for(i = 0; i<n; i++)
    {
        printf("Roll no %d got %f marks\n", i+1, s[i].marks);
    }
    return 0;
}
