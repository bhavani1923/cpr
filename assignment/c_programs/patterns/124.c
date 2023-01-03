/*******************************************//************************************

7.1. Square number patterns
11111
11111
11111
11111
11111
124.Number pattern 1

********************************************//****************************************/



#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("1");
		}
		printf("\n");
	}
}
