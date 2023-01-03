/*********************************************/ /***************************************

	9.Write a C program to convert days into years, weeks and days.

*********************************************/ /*******************************************/



#include<stdio.h>
void main()
{
	int total_days, days,weeks,years;
	printf("enter days:\n");
	scanf("%d",&total_days);
	years=total_days/365;
	weeks=(total_days % 365)/7;
	days=(total_days % 365)%7;
	printf("days in years=%d\n",years);
	printf("days in weeks=%d\n",weeks);
	printf("days in rem_days=%d\n",days);
}                                                                                                  
