/*********************************************/ /**************************************

	14.Write a C program to calculate area of an equilateral triangle.

*********************************************/ /*************************************/


#include<stdio.h>
void main()
{
	int area,eqi_tri;
	printf("enter area of triangle value:\n");
	scanf("%d",&area);
	eqi_tri=(1.73/4)*area*area;
	printf("eqi_tri=%d\n",eqi_tri);
}

