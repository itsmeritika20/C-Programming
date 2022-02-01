//Write a C program to show the uses of union.

#include <stdio.h>
union student
{
    char name[20];
    int roll;
    float marks;
};

int main()
{
    union student s;
    printf("Enter details of the student:\n");
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter total marks: ");
    scanf("%f", &s.marks);

    printf("Displaying details:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.1f\n", s.marks);

    return 0;
}
