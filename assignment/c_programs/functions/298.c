/*******************************************/ /*************************************************

	298.Write a C program to find diameter, circumference and area of circle using functions.

***********************************************/ /**********************************************/


#include<stdio.h>
void circle(int);
void circle1(int);
void circle2(int);
void main()
{
	int r,diameter;
	float circumference,area;
	printf("enter the radius = ");
	scanf("%d",&r);
	circle(r);
	circle1(r);
	circle2(r);
}

void circle(int r)
{
	int d;
	d=2*r;
	printf("diamneter of a circle = %d\n",d);
}

void circle1(int r)
{
	float c;
	c=2*3.14*r;
	printf("circumference of a circle = %f\n",c);
}
void circle2(int r)
{
	float a;
	a=3.14*r*r;
	printf("area of a circle = %f\n",a);
}

