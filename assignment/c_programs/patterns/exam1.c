/**************************************/ /**************************************
1
12
123
1234
12345

147.number pattern 24

***********************************/ /******************************************/


#include<stdio.h>
void main()
{
	int i,j,row,col;
	printf("enter the number of rows and columns: ");
	scanf("%d%d",&row,&col);
	for(i=1; i<=row; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");

	}
}

