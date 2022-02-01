//Write a function to add two integers and another function to multiply two integers.
//Declare a pointer to call these functions with two integer arguments.Using this pointer
//call the function to find sum and product of any two given integers.

#include<stdio.h>
int add(int *a, int *b, int *c);
int mul(int *a, int *b, int *c);
int main()
{
  int num1, num2, sum;
  int *pnum1, *pnum2, *psum;
  pnum1= &num1, pnum2= &num2, psum= &sum;

  printf("Enter two integer: ");
  scanf("%d %d", pnum1, pnum2);

  add(pnum1, pnum2, psum);
  printf("%d + %d = %d\n", *pnum1, *pnum2, *psum);

  mul(pnum1, pnum2, psum);
  printf("%d * %d = %d\n", *pnum1, *pnum2, *psum);


  return 0;
}

int add(int *a, int *b, int *c)
{
  *c = *a + *b;
}
int mul(int *a, int *b, int *c)
{
  *c = *a * *b;
}