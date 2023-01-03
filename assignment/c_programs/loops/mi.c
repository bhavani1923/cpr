/***********************************/ /*************************************

51. Write a C program to print all natural numbers from 1 to n. - using while loop

************************************/ /***************************************/

#include<stdio.h>
void main()
{/*
	int a,n;
	a=0;
	printf("enter n value:\n");
	scanf("%d",&n);
	do
	{
		a=a+1;
		printf("  %d ",a);
	}
	while(a<n);
	*/

	int i,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		printf("%d\t",i);
	}
	printf("\n");
	
}

