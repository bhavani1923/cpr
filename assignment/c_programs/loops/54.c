//54.Write a C program to print all even numbers between 1 to 100. - using while loop.


#include<stdio.h>
void main()
{
/*	int a,sum=0;
	a=0;
	do
	{
	
		a=a+2;
		printf("%d  ",a);
		if(a==0)
		{
			break;
		}
	
	}
	
	while(a<=10);
	
	{
		printf("  %d ",a);
		a=a+2;
		if(a==0)
		{
			break;
		}
	}*/
		
	
	int i,n;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
		
	}
	printf("\n");
			
	
}
