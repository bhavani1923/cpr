/*************************************/ /**********************************

	46. Write a C program to find maximum between two numbers using 
	    conditional/ternary operator.

*************************************/ /************************************/


#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter a and b values:\n");
	scanf("%d%d",&a,&b);
	c=a>b?a:b;
	printf("the max of %d and %d = %d\n",a,b,c);
}
