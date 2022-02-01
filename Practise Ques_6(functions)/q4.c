//Write a function to compare two strings S1 and S2 and return the result 0, 1, -1 
//if (S1=S2), (S1>S2) and (S1<S2) respectively.

#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    int i;
    printf("Enter a string1:");
    scanf("%s", &str1);
    printf("Enter a string2:");
    scanf("%s", &str2);
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] > str2[i])
        {
            printf("%d\n", str1[i] - str2[i]);
            break;
        }
        else if (str1[i] < str2[i])
        {
            printf("%d\n", str1[i] - str2[i]);
            break;
        }
        else
        {
            printf("0\n");
            break;
        }
    }
}
