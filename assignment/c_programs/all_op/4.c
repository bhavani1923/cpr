/***************************************************/ /***************************************

	4.Write a C program to enter length and breadth of a rectangle and find its area.


*****************************************************/ /****************************************/



#include<stdio.h>
void main()
{
	int length,breadth,area;
	printf("enter the values of length and breadth:\n");
	scanf("%d%d",&length,&breadth);
	area=length*breadth;
	printf("area of rectangle =%d\n",area);
}
