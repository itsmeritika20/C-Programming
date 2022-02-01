/*A library charges a fine for every book returned late. For first 5 days the fine is 50 paise, for 6
– 10 days fine is one rupee and above 10 days fine is 5 rupees. If you return the book after 30
days your membership will be cancelled. Write a program to accept the number of days the
member is late to return the book and display the fine or the appropriate message.*/

#include <stdio.h>
int main()
{
    int ndays;
    printf("Number of days the member is late : ");
    scanf("%d", &ndays);
    if (ndays > 30)
    {
        printf("Membership will be cancelled");
    }
    else if (ndays > 10)
    {
        printf("Fine : 5 rupees");
    }
    else if (ndays > 5)
    {
        printf("Fine : 1 rupees");
    }
    else
    {
        printf("Fine : 50 Paise");
    }
}