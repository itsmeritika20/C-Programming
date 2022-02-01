// //-- decrement operator

// #include <stdio.h>
// int main()
// {
//     int x = 3;
//     x--; //x=x-1 Post decrement
//     printf("%d", x);
//     --x; //x=x-1 Pre decrement
//     printf("%d", x);
//     return 0;
// }
#include<stdio.h>

int main(){
    int x=3, y;
    y=++x;
    printf("%d %d",x,y);
    return 0;
}