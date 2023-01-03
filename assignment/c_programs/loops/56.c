//56.Write a C program to print sum of all natural number between 1 to n.

/*
#include<stdio.h>
void main()
{
	int a,sum;
	a=0,sum=0;
	do
	{

		sum=sum+a;
		a++;
		printf("%d ",sum);
		if(a==0)
		{
			break;
		}
	}
	while(a<=100);
}

*/

#include<stdio.h>
void main()
{
	int n,i,sum=1;
	printf("enter the numbers: ");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{

		 
		sum =sum+i;
	}
		printf("sum of natural numbers is:%d\n",sum);
	
}

