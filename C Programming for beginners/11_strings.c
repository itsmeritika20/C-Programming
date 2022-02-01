// #include<stdio.h>

// int main()
// {
//     char s[10] = {'R','I','T','I','K','A','\0'};
//     int i;
//     //for ( i = 0; s[i] != '\0'; i++)
//        // printf("%c",s[i]);
//           //printf("%s",s);
//           puts(s);

//     return 0;
// }
// #include<stdio.h>

// int main(){
// char s[10] = "RITIKA";
//     puts(s);
//     return 0;
// }
#include <stdio.h>

int main()
{
    char s[10];
    printf("Enter your name");
    scanf("%s",&s[0]);
    puts(&s[0]);
    return 0;
}