/*******************************************/ /****************************************

	17.Write a C program to enter P, T, R and calculate Compound Interest.

*****************************************/ /******************************************/



#include<stdio.h>
#include<math.h>
void main()
{
	int principal,time_period,rate_of_interest,compound_interest;
	printf("enter three values:\n");
	scanf("%d%d%d",&principal,&time_period,&rate_of_interest);
	compound_interest=principal*pow((1+rate_of_interest/100),time_period);
	{
		printf("compound_intrust=%d\n",compound_interest);
	}
}
