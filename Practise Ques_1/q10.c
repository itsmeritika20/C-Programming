/*Given the height &amp; base of a right angle triangle. Find the hypotenuse and also find
Sine θ, Cos θ &amp; Tangent θ.*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float height,base,result,hyp;
    printf("Enter height\n");
    scanf("%f",&height);
    printf("Enter base\n");
    scanf("%f",&base);
    result = (height*height) + (base*base);
    hyp = sqrt(result);
    
    printf("The hypotenuse of the triangle is %f\n",hyp);
    printf("Sin value is %f\n",height/hyp);
    printf("Cos value is %f\n",base/hyp);
    printf("Tan value is %f\n",height/base);
    return 0;
}