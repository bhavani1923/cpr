/***************************************************/ /*****************************************

	5.Write a C program to enter radius of a circle and find its diameter, circumference and area.

**************************************************/ /*******************************************/


#include<stdio.h>
void main()
{
	float radius,diameter,circumference,area;
	printf("enter the value of the radius:\n");
	scanf("%f",&radius);
	diameter=2*radius;
	circumference=2*3.14*radius;
	area=3.14*radius*radius;
	printf("diameter of the circle =%f\n",diameter);
	printf("circumference of the circle =%f\n",circumference);
	printf("area of circle=%f\n",area);
}
