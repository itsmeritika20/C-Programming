//Write a function to compare two strings S1 and S2 and return the result 0, 1, -1
//if (S1=S2), (S1>S2) and (S1<S2) respectively.
#include <stdio.h>
#include <string.h>

int compare(char[], char[]);

int main()
{
    char str1[100];
    char str2[100];

    printf("Enter the first string : ");
    scanf("%s", &str1);
    printf("Enter the second string : ");
    scanf("%s", &str2);

    int ans = compare(str1, str2);
    if (ans == 0)
        printf("Both Strings are equal to each other");
    else if (ans == 1)
        printf("Str1 is greater than Str2");
    else if (ans == -1)
        printf("str2 is greater than Str");
    return 0;
}

int compare(char first[], char second[])
{
    int com_1 = 0;
    int com_2 = 0;

    int i = 0;
    int j = 0;

    while (first[i] != '\0')
    {
        com_1 += first[i];
        i++;
    }
    while (second[j] != '\0')
    {
        com_2 += second[j];
        j++;
    }
    if (com_1 == com_2)
        return 0;
    else if (com_1 > com_2)
        return 1;
    else if (com_1 < com_2)
        return -1;
}