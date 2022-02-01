/*XYZ’s basic salary is input through the keyboard. His dearness allowance is 40% of
basic salary, and house rent allowance is 20% of basic salary. Write a C program to
calculate his gross salary.*/

#include<stdio.h>
int main()
{
    float basic_salary, allowance, house_rent, gross_salary;
    printf("Enter Basic Salary: ");
    scanf("%f",&basic_salary);

    allowance = (40.0/100.0)*basic_salary;
    house_rent = (20.0/100.0)*basic_salary;
    gross_salary = basic_salary + allowance + house_rent;
    printf("\n Basic Salary: %.2f",basic_salary);
    printf("\n Dearness allowance: %.2f",allowance);
    printf("\n House rent: %.2f",house_rent);
    printf("\n Gross salary: %.2f",gross_salary);
    return 0;
}