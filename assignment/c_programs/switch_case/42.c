//42.Write a C program to find maximum between two numbers using switch case.

#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a and b values:\n");
	scanf("%d%d",&a,&b);
	switch(a>b)
	{
		case 1:
			printf("a is big\n");
			break;


		default:
			printf("b is big\n");
			break;
	}
}

