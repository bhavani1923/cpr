/*******************************************/ /***********************************************

	35.Write a C program to calculate profit or loss.

*******************************************/ /**********************************************/


#include<stdio.h>
void main()
{
	int cost_price,selling_price,amount;
	printf("enter cost price: ");
	scanf("%d",&cost_price);
	printf("enter the selling price: ");
	scanf("%d",&selling_price);

	if(selling_price > cost_price)
	{

		amount = selling_price - cost_price;
		printf("profit =%d\n",amount);
	}
	else if(cost_price > selling_price)
	{
		amount = cost_price - selling_price;
		printf("loss = %d\n",amount);
	}
	else
	{
		printf("no profit no loss..\n");
	}
}
