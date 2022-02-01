//WAP to define a structure with data members roll no, student name and total marks obtained. 
//Declare a structure pointer to read and display the value of data members using it.

#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};

int main()
{
    struct student s, *p;
    printf("Enter roll no:\n");
    scanf("%d",&s.roll);
    printf("Enter name:\n");
    scanf("%s",s.name);
    printf("Enter marks:\n");
    scanf("%f",&s.marks);
    p = &s;
    printf("Displaying details:\n");
    printf("Roll no = %d\n",p->roll);
    printf("Name = %s\n",p->name);
    printf("Total marks = %f\n",p->marks);
    return 0;
}
