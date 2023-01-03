/***************************************************//***************************************

	7.2. Triangle easy number pattern
11111
2222
333
44
5
143.Number pattern 20

***************************************************//***************************************/


#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

