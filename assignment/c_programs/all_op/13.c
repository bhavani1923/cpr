/*******************************************/ /***************************************

	13.Write a C program to enter base and height of a triangle and find its area.
	
****************************************/ /********************************************/


#include<stdio.h>
void main()
{
	int base,height,area;
	printf("enter base of a triangle:\n");
	scanf("%d",&base);
	printf("enter height of a traingle:\n");
	scanf("%d",&height);
	area=(base*height)/2;
	{
		printf("%d",area);
	}
}
