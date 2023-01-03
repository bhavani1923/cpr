/***************************************************//***************************************

	7.2. Triangle easy number patterns

5
54
543
5432
54321

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
			printf("%d",j);
		}
		printf("\n");
	}
}

