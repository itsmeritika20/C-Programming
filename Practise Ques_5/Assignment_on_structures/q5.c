//Declare a structure of a student with detail like roll no, name, total marks using this
//declare an array with 50 elements. Write a C program to read the details of n students &
//print the list of students who have scored 75% marks & above.

#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[50];
int main()
{
    int i, n;

    printf("Enter information:\n");
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter how many students:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        s[i].roll = i + 1;
        printf("Enter name:");
        scanf("%s", s[i].name);
        printf("Enter roll:");
        scanf("%d", &s[i].roll);
        printf("Enter total marks:");
        scanf("%f", &s[i].marks);
    }

    printf("Displaying information:\n");
    for (i = 0; i < n; i++)
    {
        if (s[i].marks >= 75)
        {
            printf("%s got %f marks\n", s[i].name, s[i].marks);
        }
        else
        printf("No one got the desired marks\n");
    }
    return 0;
}
