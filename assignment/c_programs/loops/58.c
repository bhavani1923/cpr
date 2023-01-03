/******************************************/ /*****************************************

	58.Write a C program to find sum of all odd numbers between 1 to n.

******************************************/ /*****************************************/


#include<stdio.h>
void main()
{
	int strt, end, sum=0, i;
	
	printf("ENTER THE START NUMBER AND END NUMBER\n");
	scanf("%d%d", &strt, &end);

	for (i=strt; i<=end; i++)
	{
		if (i%2 != 0)
		{
			sum = sum + i;
			printf("%d\n", i);
		}
	}
	printf("The odd sum btwn given numbers is %d\n" , sum);
}



