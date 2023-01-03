/***************************************************//***************************************

	7.2. Triangle easy number pattern
5
44
333
2222
11111
143.Number pattern 20

***************************************************//***************************************/


#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

