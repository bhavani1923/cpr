/***********************************************/ /*******************************************

	311.Write a C program to find sum of all even or odd numbers in given range using
recursion.

***********************************************/ /*******************************************/

/*
#include<stdio.h>
void even_odd(int,int);
int main()
{
	int num,limit,sum;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("enter the limit:\n");
	scanf("%d",&limit);
	if(num%2==0)
	{
		printf("even numbers:\n");
		even_odd(num,limit);
		num=num+1;
		printf("\n");
		printf("odd numbers:\n");
		even_odd(num,limit);
		printf("\n");	
	}
	else if(num%2!=0)
	{
		printf("odd numbers:\n");
		even_odd(num,limit);
		num=num+1;
		
		printf("\n");
		printf("even numbers:\n");
		even_odd(num,limit);
		
		printf("\n");
	}
	return 0;
}
void even_odd(int n,int limit)
{
	if(n<=10)
	{
		printf("%d ",n);
		
		even_odd(n+2,limit);
	
	}
	
}

*/

#include<stdio.h>
int even(int,int);
int odd(int,int);
int main()
{
	int start,limit;
	printf("enter upper limit number:\n");
	scanf("%d",&start);
	printf("enter lower limit number:\n");
	scanf("%d",&limit);
	even(start,limit);
	printf("sum of even numbers=%d\n",even(start,limit));
	printf("\n");
	odd(start,limit);
	printf("sum of odd numbers=%d\n",odd(start,limit));
	printf("\n");

	
}
int even(int start, int limit)
{
	
	
		
		if(start>limit)
		{
			return 0;
		}

			return start+even(start+2,limit);
	
}
int odd(int start, int limit)
{
	
		if(start > limit)
		{
			return 0;
		}
		return start+odd(start+2,limit);

	
}

	

