/***************************************************//***************************************

	7.2. Triangle easy number patterns

13579
3579
579
79
9

157.Number pattern 34

***************************************************//***************************************/


#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("enter the rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=(i*2)-1;
		for(j=i;j<=n;j++)
		{
			printf("%d",k);
			k=k+2;
		}
		printf("\n");
	}
}

