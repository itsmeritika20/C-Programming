//Write a C program to count the number of vowels in a string.//

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], v[] = "aeiouAEIOU";
    int i, j, count = 0;
    printf("Enter a string: ");
    gets(str);
    for (i = 0; str[i]; i++)
    {
        for (j = 0; v[j]; j++)
        {
            if (str[i] == v[j])
            {
                count++;
                break;
            }
        }
    }
    printf("Total vowels in %s is %d", str, count);
}