/************************************************/ /****************************************

	3.Write a C program to enter length and breadth of a rectangle and find its perimeter.

**************************************************/ /**************************************/


#include<stdio.h>
void main()
{
	int length,breadth,perimeter;
	printf("enter the values of length and breadth:\n");
	scanf("%d%d",&length,&breadth);
	perimeter=2*(length+breadth);
	printf("perimeter of rectangle =%d\n",perimeter);
}
