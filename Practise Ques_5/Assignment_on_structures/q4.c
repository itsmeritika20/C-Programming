// Write a C program to read the co-ordinates of the end points of a line & to find its 
//length. Used a structure variable named ‘line’ to store the relevant information about 
//its n point.

#include<stdio.h>
#include<math.h>
struct line
{
	float x1,x2;
	float y1,y2;
};
typedef struct line Li;
int main()
{
	Li m;
	float len;
	printf("Enter x co-ordinates of first points\n");
	scanf("%f",&m.x1);
	printf("Enter y co-ordinates of first points\n");
	scanf("%f",&m.y1);

	printf("Enter x co-ordinates of end points\n");
	scanf("%f",&m.x2);
	printf("Enter y co-ordinates of end points\n");
	scanf("%f",&m.y2);
	
	len=sqrt((m.x2-m.x1)*(m.x2-m.x1)+(m.y2-m.y1)*(m.y2-m.y1));
	printf("The length of the straight line is %f",len);
	return 0;	
}
