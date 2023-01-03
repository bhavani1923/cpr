//23.Write a C program to check whether a year is leap year or not.


#include<stdio.h>
void main()
{
	int year;
	printf("enter the year:\n");
	scanf("%d",&year);
	if(year%100!=0) 
	{
		if(year%4==0)
		{
			printf("given year is leap year\n");
		}
		else
		{
			printf("given year is not leap year\n");
		}
	}
	else
	{
		if(year%400==0)
		{
			printf("given year is leap year\n" );
		}
		else
		{
			printf("given year is not leap year\n");
		}
	}
}



