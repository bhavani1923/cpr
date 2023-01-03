/***************************************************//***************************************

	7.2. Triangle easy number patterns

1
23
345
4567
56789

155.Number pattern 32

***************************************************//***************************************/


#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("enter the rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	
}

