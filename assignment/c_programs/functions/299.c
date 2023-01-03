/****************************************/ /*****************************************

	299.Write a C program to find maximum and minimum between two numbers using
       		functions.

******************************************/ /********************************************/


#include<stdio.h>
int max(int,int);
void main()
{
	int a,b,c;
	printf("enter the two numbwers\n");
	scanf("%d%d",&a,&b);
	c=max(a,b);
}
int max(int a,int b)
{
	int c;
	if(a>b)
	{
		printf("a is max= %d\n",a);
	}
	else
	{
		printf("b is max= %d\n",b);
	}
	return c;
}

	
