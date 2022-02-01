/*A certain grade of steel is graded according to the following conditions:
(i) Hardness must be grater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600
The grades are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the conditions are met

Write a program, which will require the user to give values of hardness carbon content and
tensile strength of the steel under consideration and output the grade of the steel.*/
#include <stdio.h>
int main()
{
  float hn, cc, ts;
  int con1, con2, con3;
  printf("Hardness : ");
  scanf("%f", &hn);
  printf("carbon Content : ");
  scanf("%f", &cc);
  printf("Tesnsile Strength : ");
  scanf("%f", &ts);
  con1 = hn > 50 ? 1 : 0;
  con2 = cc < 0.7 ? 1 : 0;
  con3 = ts > 5600 ? 1 : 0;
  if (con1 && con2 && con3)
  {
    printf("Grade : 10");
  }
  else if (con1 && con2)
  {
    printf("Grade : 9");
  }
  else if (con2 && con3)
  {
    printf("Grade : 8");
  }
  else if (con1 && con3)
  {
    printf("Grade : 7");
  }
  else if (con1 || con2 || con3)
  {
    printf("Grade : 6");
  }
  else
  {
    printf("Grade : 5");
  }
}