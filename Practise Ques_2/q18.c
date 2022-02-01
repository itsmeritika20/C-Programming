/*Write a C program to find the average of best three marks from the given four test marks.
[ Hint: Find the smallest of given four test marks. Subtract it from the first sum of four test
marks. You will now get the sum of best three marks. Take the average
i.e., average=(T1+T2+T3+T4- smallest)/3 ]*/

#include <stdio.h>
int main()
{
  float sub1, sub2, sub3, sub4, smallest;
  printf("Sub1 : ");
  scanf("%f", &sub1);
  printf("Sub2 : ");
  scanf("%f", &sub2);
  printf("Sub3 : ");
  scanf("%f", &sub3);
  printf("Sub4 : ");
  scanf("%f", &sub4);

  if (sub1 < sub3 && sub1 < sub2 && sub1 < sub4)
  {
    smallest = sub1;
  }
  else if (sub2 < sub3 && sub2 < sub4)
  {
    smallest = sub2;
  }
  else if (sub3 < sub4)
  {
    smallest = sub3;
  }
  else
  {
    smallest = sub4;
  }
  printf("Average : %f", (sub1 + sub2 + sub3 + sub4 - smallest) / 3);
}