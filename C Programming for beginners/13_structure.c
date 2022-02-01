struct date
{
    int d,m,y;
};
// struct student
// {
//     int rollno;
//     char name[20];
//     int age;
// };
void main()
{
    struct date today={17,7,2021}; //declaration during initialization
    
}

void main() //initialization after declaration
{
    struct  date today,d1;
    today.d=17;
    today.m=7;
    today.y=2021;

    d1=today;
    printf("enter today's date");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("date: %d/%d/%d",d1.d,d1.m,d1.y);
}


#include<stdio.h>
struct date
{
    int d,m,y;
};
void main() //initialization after declaration
{
    struct  date today,d1;
    d1=today;
    printf("enter today's date");
    scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
    printf("date: %d/%d/%d",d1.d,d1.m,d1.y);
}
