// #include <stdio.h>

// int main()
// {
//     int x,y;
//     float k;
//     double d1;
//     char ch;
//     x = sizeof(ch);
//     printf("%d", x);
//     return 0;
// }
#include<stdio.h>
int main(){
    int x,y,z;
    x=sizeof(34);
    y=sizeof(3.45);
    z=sizeof('a'); //ASCII 
    printf("%d %d %d",x,y,z);
    return 0;
}