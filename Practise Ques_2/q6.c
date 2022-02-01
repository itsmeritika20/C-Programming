/*If the ages of Ram, Shyam and Rohim are input through the keyboard, write a program to
determine the youngest of the three.*/
#include <stdio.h>
int main()
{
  int ram, shyam, rohim;
  printf("Enter the age of Ram : ");
  scanf("%d", &ram);
  printf("Enter the age of Shyam : ");
  scanf("%d", &shyam);
  printf("Enter the age of Rohim : ");
  scanf("%d", &rohim);
  if (ram > shyam)
  {
    if (shyam > rohim)
    {
      printf("Rohim is younger");
    }
    else
    {
      printf("Shyam is younger");
    }
  }
  else
  {
    if (ram > rohim)
    {
      printf("Rohim is younger");
    }
    else
    {
      printf("Ram is younger");
    }
  }
}
