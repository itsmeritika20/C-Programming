//Create a structure to store the following information of an employee – employee’s id, name, 
//pay & date of joining. It is decided to increase the pay as per the following rules.
// Pay <= Rs.2000                                                :15% increase
// Pay <= rs.5000 but >=Rs.2000                   	             :10% increase
// Pay >Rs.5000                                             	 : No increase
// Write a C program to implement the above logic. (Use function).

#include<stdio.h>
struct employee
{
    double ei;
    char name[50];
    float pay;
    int year;
    int month;
    int day;
};
typedef struct employee emp;
emp input()
{
    emp e1;
    printf("Enter Name of Employee:\n");
    scanf("%s",e1.name);
    printf("Enter Employee's Id:");
    scanf("%lf",&e1.ei);
    printf("Enter current Pay:Rs.");
    scanf("%f",&e1.pay);
    printf("Enter date of Joining:(day month year):");
    scanf("%d/%d/%d",&e1.day,&e1.month,&e1.year);
    /*printf("Day:");
    scanf("%d",&e1.day);
    printf("Month:");
    scanf("%d",&e1.month);
    printf("Year:");
    scanf("%d",&e1.year);*/
    return e1;
}
void display(emp e1)
{
    printf("\nName:%s\n",e1.name);
    printf("Id:%.0lf\n",e1.ei);
    printf("Date of Joining:%d/%d/%d\n",e1.day,e1.month,e1.year);
    printf("Current Salary:Rs%f\n",e1.pay);
}
void salary_adust(emp e1)
{
    float np;//new pay
    if(e1.pay>5000.0)
        np=e1.pay;
    else if(e1.pay>=2000.0 && e1.pay<=5000.0)
        np=e1.pay+(e1.pay*0.1);
    else
        np=e1.pay+(e1.pay*0.15);
    printf("New salary=Rs.%f\n",np);
}
int main()
{
    emp e;
    e=input();
    display(e);
    salary_adust(e);
    return 0;
} 
