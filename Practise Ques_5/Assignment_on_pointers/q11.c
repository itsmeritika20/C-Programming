//WAP of nested structure using pointers.

#include <stdio.h>
int main()
{
    struct dob
    {
        int day;
        int month;
        int year;
    };
    struct student
    {
        char name[20];
        int roll;
        struct dob *dobptr;
    };
    
    struct student s1;
    printf("Enter name:");
    scanf("%s", s1.name);

    printf("Enter roll:");
    scanf("%d", &s1.roll);

    printf("Enter dob:");
    scanf("%d%d%d", &s1.d1.day, &s1.d1.month, &s1.d1.year);

    printf("Displaying details:\n");
    printf("Name:%s\n", s1.name);
    printf("Roll no:%d\n", s1.roll);
    printf("Date of birth:%d-%d-%d", s1.d1.day, s1.d1.month, s1.d1.year);
}