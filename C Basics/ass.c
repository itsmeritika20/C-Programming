#include <stdio.h>
int main(){
 int num, sum = 0;
 printf("Enter 5 digit no : ");
 while((num = getchar()) != '\n'){
 num = num - '0';
 sum = sum + num;
 }
 printf("Sum of the numbers is %d", sum);
}
