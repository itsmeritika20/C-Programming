// //sizeof operator
// #include <stdio.h>
// int main ()
// {
//   int intType;
//   float floatType;
//   double doubleType;
//   char charType;
//   long longType;
//   long long A;
//   long double B;

//   printf ("Size of int:%u\n", sizeof (intType));
//   printf ("Size of float:%u\n", sizeof (floatType));
//   printf ("Size of double:%u\n", sizeof (doubleType));
//   printf ("Size of char:%u\n", sizeof (charType));
//   printf ("Size of long:%u\n", sizeof (longType));
//   printf ("Size of long long:%u\n", sizeof (A));
//   printf ("Size of long double:%u\n", sizeof (B));
//   return 0;
// }
// //Swap Numbers Using Temporary Variable
// #include<stdio.h>
// int main() {
//       double first, second, temp;
//       printf("Enter first number: ");
//       scanf("%lf", &first);
//       printf("Enter second number: ");
//       scanf("%lf", &second);

//       printf("\nBefore swapping, firstNumber = %lf\n", first);
//       printf("\nBefore swapping, secondNumber = %lf\n", second);

//       // Value of first is assigned to temp
//       temp = first;

//       // Value of second is assigned to first
//       first = second;

//       // Value of temp (initial value of first) is assigned to second
//       second = temp;

//       printf("\nAfter swapping, firstNumber = %lf\n", first);
//       printf("\nAfter swapping, secondNumber = %lf\n", second);
//       return 0;
// }

////Swap Numbers without Using Temporary Variable
#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a: ");
    scanf("%lf", &a);
    printf("Enter b: ");
    scanf("%lf", &b);

    // Swapping
    a = a - b;   
    b = a + b;
    a = b - a;

    printf("After swapping, a = %lf\n", a);
    printf("After swapping, b = %lf", b);
    return 0;
}
//Check whether a number is even or odd
// #include <stdio.h>

// int main() 
// {
//     int a;
//     printf("Enter a no");
//     scanf("%d", &a);
//     if(a%2==0)
//     {
//         printf("The no is even",a);
//     }
//     else
//     {
//         printf("The no is odd",a);
//     }
//     return 0;
// }

// //Check whether a character is a vowel or consonant
// #include<stdio.h>
// int main()
// {
//     char p;
//     int lowecase_vowel, uppercase_vowel;
//     printf("Enter any character");
//     scanf("%c",&p);
    
//     lowecase_vowel = (p=='a'|| p=='e' || p=='i'|| p=='o'|| p=='u');
//     uppercase_vowel = (p=='A' || p=='E' || p=='I' || p=='O' || p=='U');
    
//     if(lowecase_vowel||uppercase_vowel)
//     {
//         printf("The character is a vowel",p);
//     }
//     else
//     {
//         printf("The character is a consonant",p);
//     }
//     return 0;
// }

// //Find the largest number among three numbers

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter three no: ");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a>b && a>c)
//     {
//         printf("%d is the largest no",a);
//     }
//     else if(b>a && b>c)
//     {
//          printf("%d is the largest no",b);
//     }
//     else
//     {
//          printf("%d is the largest no",b);
//     }
//     return 0;
// }
// //roots of a quadratic eqn
// #include <math.h>
// #include <stdio.h>
// int main() {
//     double a, b, c, discriminant, root1, root2, realPart, imagPart;
//     printf("Enter coefficients a, b and c: ");
//     scanf("%lf %lf %lf", &a, &b, &c);

//     discriminant = b * b - 4 * a * c;

//     // condition for real and different roots
//     if (discriminant > 0) {
//         root1 = (-b + sqrt(discriminant)) / (2 * a);
//         root2 = (-b - sqrt(discriminant)) / (2 * a);
//         printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
//     }

//     // condition for real and equal roots
//     else if (discriminant == 0) {
//         root1 = root2 = -b / (2 * a);
//         printf("root1 = root2 = %.2lf;", root1);
//     }

//     // if roots are not real
//     else {
//         realPart = -b / (2 * a);
//         imagPart = sqrt(-discriminant) / (2 * a);
//         printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
//     }

//     return 0;
// } 
// //check leap year
// #include <math.h>
// #include <stdio.h>
// int main() {
//     int m;
//     printf("Enter a year: ");
//     scanf("%d",&m);

//     // condition for leap year
//     if (m%400 == 0) 
//     {
//         printf("%d is a leap year",m);
//     }
//     else if (m%100 == 0) 
//     {
//         printf("%d is a leap year",m);
//     }
//     else if (m%4 == 0) 
//     {
//         printf("%d is a leap year",m);
//     }
//     else 
//     {
//        printf("%d is not a leap year",m); 
//     }

//     return 0;
// } 
// //positive/negative no
// #include <stdio.h>
// int main() {
//     double num;
//     printf("Enter a number: ");
//     scanf("%lf", &num);
//     if (num <= 0.0) {
//         if (num == 0.0)
//             printf("You entered 0.");
//         else
//             printf("You entered a negative number.");
//     } else
//         printf("You entered a positive number.");
//     return 0;
// }

// //check alphabet or not
// #include <stdio.h>
// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);

//     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
//         printf("%c is an alphabet.", c);
//     else
//         printf("%c is not an alphabet.", c);

//     return 0;
// }
// //sum of natural numbers
// #include <stdio.h>

// int main()
// {
//     int num,i,sum=0;
//     printf("Enter a number");
//     scanf("%d",&num);
    
//     for(i=0; i<=num; i++)
//     sum+=i;
//     printf("Sum is %d",sum);
//     return 0;
// }
// //factorial of num
// #include <stdio.h>
// int main() {
//     int n, i;
//     unsigned long long fact = 1;
//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     // shows error if the user enters a negative integer
//     if (n < 0)
//         printf("Error! Factorial of a negative number doesn't exist.");
//     else {
//         for (i = 1; i <= n; ++i) {
//             fact *= i;
//         }
//         printf("Factorial of %d = %llu", n, fact);
//     }

//     return 0;
// }

