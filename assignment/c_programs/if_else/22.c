//22.Write a C program to check whether a number is even or odd.

#include<stdio.h>
void main()
{
	int n;
	printf("enter any number:\n");
	scanf("%d",&n);
	if(n==0)
	{
		printf("given is not valid\n");
	}
	else if(n%2==0)
	     {
		printf("given number is even\n");
	     }
	else
	{
			printf("given number is odd\n");
	}
	
}
