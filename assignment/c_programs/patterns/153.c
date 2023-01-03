/***************************************************//***************************************

	7.2. Triangle easy number patterns

5
45
345
2345
12345

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
		for(j=i;j<=n;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

