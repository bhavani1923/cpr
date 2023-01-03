/******************************************/ /***********************************

*
**
***
****
*****
189.
Right triangle

******************************************/ /**************************************/

#include<stdio.h>
void main()
{
	int i,j,col,row;
	printf("enter the number:");
	scanf("%d%d",&row,&col);
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
}
