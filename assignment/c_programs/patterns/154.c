/***************************************************//***************************************

	7.2. Triangle easy number patterns

12345
2345
345
45
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
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

