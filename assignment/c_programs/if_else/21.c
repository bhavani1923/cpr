//21.Write a C program to check whether a number is divisible by 5 and 11 or not.


#include<stdio.h>
void main()
{
	int n;
	printf("enter a value:\n");
	scanf("%d",&n);
	if(n%11==0 && n%5==0)
	{
		printf("n is divisible by 5 and 11\n");
	}
	else
	{
		printf("n is not divisible by 5 and 11\n");
	}
}

		


