// // #include <windows.h>
// // void gotoxy(int x, int y)
// // {
// //     COORD c;
// //     c.X = x;
// //     c.Y = y;
// //     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
// // }
// // main()
// // {
// //     gotoxy("20,8");
// //     printf("Hello");
// //     getch();
// // }
// #include<stdio.h>

// int main(){
//     int x;
//     x=20%4;
//     printf("%d",x);
//     return 0;
// }
#include <stdio.h>

int main()
{
    int x;
    x = 3 < 4;
    printf("%d",x);
    return 0;
}