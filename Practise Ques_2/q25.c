/*Write a C program to print a pyramid of digits as shown below for n number of lines
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4*/
#include <stdio.h>
int main()
{
   int i, space, rows, k = 0, count = 0, count1 = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i)
   {
      for (space = 1; space <= rows - i; ++space)
      {
         printf("  ");
         ++count;
      }
      while (k != 2 * i - 1)
      {
         if (count <= rows - 1)
         {
            printf("%d ", i + k);
            ++count;
         }
         else
         {
            ++count1;
            printf("%d ", (i + k - 2 * count1));
         }
         ++k;
      }
      count1 = count = k = 0;
      printf("\n");
   }
   return 0;
}