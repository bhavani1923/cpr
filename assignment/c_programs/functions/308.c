/**********************************************/ /*********************************

	308.Write a C program to print all natural numbers between 1 to n using 
	recursion.

*******************************************/ /************************************/


#include<stdio.h>
int natural(int);
int main()
{
	int n,i;
	printf("enter the number from 1 to ");
	scanf("%d",&n);

	natural(n);

	return n;	
}


int natural(int n)
{
	int i;
	for(i=1; i<=n; i++)
	{
		printf("%d\t",i);
	}
	printf("\n");	
}
