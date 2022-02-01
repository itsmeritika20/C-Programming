//Define a structure with the following members - roll no, name, total marks of a student.
//Write a C program to read & display the details of a student.

#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float marks;
} s;

int main()
{
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
