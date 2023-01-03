/***************************************************//***************************************

	7.2. Triangle easy number pattern
1
21
321
4321
54321
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
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

