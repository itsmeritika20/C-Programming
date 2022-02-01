/*Admission to a professional course is subject to the following conditions:
(a) Marks in mathematics &gt;=60
(b) Marks in Physics &gt;=50
(c) Marks in Chemistry &gt;=40
(d) Total in all three subjects &gt;=200
Or
Total in mathematics and physics &gt;=150
Given the marks in the three subjects, write a program to process the application to list the
eligible candidates.*/
#include <stdio.h>
#include <conio.h>
int main()
{
    int Maths, Phy, Chem, Total, Total_MP;
    printf("Enter the marks of maths: ");
    scanf("%d", &Maths);
    printf("Enter the marks of phy: ");
    scanf("%d", &Phy);
    printf("Enter the marks of chem: ");
    scanf("%d", &Chem);

    Total = Maths + Phy + Chem;
    Total_MP = Maths + Phy;
    if (Maths >= 60 && Phy >= 50 && Chem >= 40 && Total >= 200)
        printf("The candidate is eligible for the admission");
    else
    {
        if (Total_MP >= 150)
            printf("The candidate is eligible for the admission");
        else
            printf("The candidate is not eligible for the admission");
    }
}