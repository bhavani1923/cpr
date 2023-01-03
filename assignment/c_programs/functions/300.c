/**************************************/ /*************************************

	300.Write a C program to check whether a number is even or odd using 
	    functions.

***************************************/ /*************************************/



#include<stdio.h>
int even(int);
int odd(int);
int main()
{
	int n;
	printf("enter the any number:\n");
	scanf("%d",&n);

	even(n);
	odd(n);
}
int even(int n)
{
	if(n%2!=0)
	{
		return 0;
	}
	printf("given number is even\n");
}
int odd(int n)
{
	if(n%2==0)
	{
		return 0;
	}
	printf("gievn number is odd\n");
}

