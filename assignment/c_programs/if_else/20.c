//20.Write a C program to check whether a number is negative, positive or zero.



#include<stdio.h>
void main()
{
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	if(a>0)
	{
		printf("enter number is positive\n");
	}
	else
	{
		if(a<0)
		{
			printf("enter number is negitive\n");
		}
		else
		{
			printf("number is zero\n");
		}
	}
}


