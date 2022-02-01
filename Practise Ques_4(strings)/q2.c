//Write a C program to count the occurrence of a particular character in a string.//

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char str[50], search;
    int i, count;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character:");
    search = getchar();
    count = 0;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == search)
        {
            count++;
        }
        i++;
    }
    printf("Total occurence of %c = %d",search,count);
}