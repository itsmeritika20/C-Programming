/*Write a C program to print the grade for the marks obtained
Average Marks      Grade
80 to 100         Honours
60 to 79        First division
50 to 59        Second division
0 to 49          Fail */

#include <stdio.h>
int main()
{
    float score;
    printf("Score : ");
    scanf("%f", &score);
    printf("Grade: ");
    if (score <= 49)
    {
        printf("Fail");
    }
    else if (score <= 59)
    {
        printf("Second Division");
    }
    else if (score <= 79)
    {
        printf("First Division");
    }
    else
    {
        printf("Honours");
    }
}
