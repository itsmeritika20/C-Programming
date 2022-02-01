C Keywords and Identifiers:-
In this tutorial, you will learn about keywords; reserved words in C programming that are part of the syntax. 
Also, you will learn about identifiers and how to name them.

"Character set":
A character set is a set of alphabets, letters and some special characters that are valid in C language.
Alphabets-C accepts both lowercase and uppercase alphabets as variables and functions.
Uppercase: A B C ................................... X Y Z
Lowercase: a b c ...................................... x y z
Digits- 0 1 2 3 4 5 6 7 8 9
White space Characters-Blank space, newline, horizontal tab, carriage return and form feed.

"C Keywords":
Keywords are predefined, reserved words used in programming that have special meanings to the compiler. 
Keywords are part of the syntax and they cannot be used as an identifier. 
For example: int money;
Here, int is a keyword that indicates money is a variable of type int (integer)
As C is a case sensitive language, all keywords must be written in lowercase. 
Here is a list of all keywords allowed in ANSI C.

C Keywords (total 32 keywords):
auto	double	int	struct
break	else	long	switch
case	enum	register	typedef
char	extern	return	union
continue	for	signed	void
do	if	static	while
default	goto	sizeof	volatile
const	float	short	unsigned

"C Identifiers":
Identifier refers to name given to entities such as variables, functions, structures etc.
Identifiers must be unique. They are created to give a unique name to an entity to identify 
it during the execution of the program. For example:int money;
double accountBalance;
Here, money and accountBalance are identifiers.
Also remember, identifier names must be different from keywords.
You cannot use int as an identifier because int is a keyword.


"Variables":
In programming, a variable is a container (storage area) to hold data.To indicate the storage area, 
each variable should be given a unique name (identifier). Variable names are just the symbolic representation 
of a memory location. 
For example:
int playerScore = 95;
Here, playerScore is a variable of int type. Here, the variable is assigned an integer value 95.

The value of a variable can be changed, hence the name variable.
char ch = 'a';
// some code
ch = 'l';

Note: You should always try to give meaningful names to variables. 
For example: firstName is a better variable name than fn.
C is a strongly typed language. This means that the variable type cannot be changed once it is declared. 
For example:
int number = 5;      // integer variable
number = 5.5;        // error
double number;       // error
Here, the type of number variable is int. You cannot assign a floating-point (decimal) value 5.5 to this variable. 
Also, you cannot redefine the data type of the variable to double. 
By the way, to store the decimal values in C, you need to declare its type to either double or float.


"Literals":
Literals are data used for representing fixed values. They can be used directly in the code. 
For example: 1, 2.5, 'c' etc.
Here, 1, 2.5 and 'c' are literals. 

1. "Integers"-An integer is a numeric literal(associated with numbers) without any fractional or exponential part. 
There are three types of integer literals in C programming:
decimal (base 10):0, -9, 22 etc
octal (base 8):021, 077, 033 etc
hexadecimal (base 16):0x7f, 0x2a, 0x521 etc

2."Floating-point Literals"-A floating-point literal is a numeric literal that has either a fractional form 
or an exponent form. 
For example:
-2.0
0.0000234
-0.22E-5
Note: E-5 = 10-5

3. "Characters"-A character literal is created by enclosing a single character inside single quotation marks. 
For example: 'a', 'm', 'F', '2', '}' etc.

4."Escape Sequences"-Sometimes, it is necessary to use characters that cannot be typed or has special meaning in C .
For example: newline(enter), tab, question mark etc.In order to use these characters, escape sequences are used.
"Escape Sequences":
// Escape Sequences	Character
// \b	                Backspace
// \f              	    Form feed
// \n	                Newline
// \r	                Return
// \t	                Horizontal tab
// \v	                Vertical tab
// \\	                Backslash
// \'	                Single quotation mark
// \"	                Double quotation mark
// \?	                Question mark
// \0	                Null character
For example: 
\n is used for a newline.The backslash \ causes escape from the normal way the characters are handled by the compiler.

5."String Literals"-A string literal is a sequence of characters enclosed in double-quote marks. 
For example:
"good"                  //string constant
""                     //null string constant
"      "               //string constant of six white space
"x"                    //string constant having a single character.
"Earth is round\n"         //prints string with a newline

"Constants":
If you want to define a variable whose value cannot be changed, you can use the const keyword. 
This will create a constant. For example,
const double PI = 3.14;
Notice, we have added keyword const.
Here, PI is a symbolic constant; its value cannot be changed.
const double PI = 3.14;
PI = 2.9; //Error
You can also define a constant using the #define preprocessor directive.

"C Data Types":
In C programming, data types are declarations for variables. 
This determines the type and size of data associated with variables. 
For example: int myVar;
Here, myVar is a variable of int (integer) type. The size of int is 4 bytes.

int :
Integers are whole numbers that can have both zero, positive and negative values but no decimal values. 
For example- 0, -5, 10
We can use int for declaring an integer variable.
int id;
Here, id is a variable of type integer.
You can declare multiple variables at once in C programming. 
For example- int id, age;
The size of int is usually 4 bytes (32 bits). And, it can take 232 distinct states from -2147483648 to 2147483647.

float and double:
float and double are used to hold real numbers.
float salary;
double price;
In C, floating-point numbers can also be represented in exponential. 
For example- 
float normalizationFactor = 22.442e2;

// What is the difference between float and double?
// The size of float (single precision float data type) is 4bytes.
// And the size of double (double precision float data type) is 8bytes.

char:
Keyword "char" is used for declaring character type variables. 
For example-
char test = 'h';
The size of the character variable is 1 byte.

void:
void is an incomplete type. It means "nothing" or "no type". You can think of void as absent.
For example, if a function is not returning anything, its return type should be void.
Note that, you cannot create variables of void type.

short and long:
If you need to use a large number, you can use a type specifier long. Here is how:

long a;
long long b;
long double c;
Here variables a and b can store integer values. And, c can store a floating-point number.

If you are sure, only a small integer ([−32, 767, +32, 767] range) will be used, you can use short.

short d;
You can always check the size of a variable using the sizeof() operator.

#include <stdio.h>      
int main() {
  short a;
  long b;
  long long c;
  long double d;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  return 0;
}
signed and unsigned:
In C, signed and unsigned are type modifiers. You can alter the data storage of a data type by using them. 
For example,

unsigned int x;
int y;
Here, the variable x can hold only zero and positive values because we have used the unsigned modifier.

Considering the size of int is 4 bytes, variable y can hold values from -231 to 231-1, 
whereas variable x can hold values from 0 to 232-1.

Other data types defined in C programming are:

bool Type
Enumerated type
Complex types
Derived Data Types
Data types that are derived from fundamental data types are derived types. 
For example:-
 arrays, pointers, function types, structures, etc.