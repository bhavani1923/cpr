/*********************Write a C program to check Most Significant Bit (MSB) of a number is set or not.*************************/


#include<stdio.h>
void main()
{
	int n,pos;
	printf("enter the number: ");
	scanf("%d",&n);
	if((0x01<<(12-1))&n)
	{
		printf("MSB is set");
	}
	else
	{
		printf("MSB is not set");
	}
}
