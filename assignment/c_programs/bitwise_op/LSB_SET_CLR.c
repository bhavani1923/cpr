/*******************Write a C program to check Least Significant Bit (LSB) of a number is set or not.**************************/


#include<stdio.h>
void main()
{
	int n,pos;
	printf("enter the number:");
	scanf("%x",&n);
	if(n&1==1)
	{
		printf("LSB is set=%d\n",n);
	}
	else
	{
		printf("LSB is not set =%d\n",n);
	}
}
