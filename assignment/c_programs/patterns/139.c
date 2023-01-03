/************************************************//*******************************************

	7.1 square number patterns

	12345
	23451
	34521
	45321
	54321


	139.number pattern 16


****************************************//************************************************/



#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("enter the row and colomn: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			printf("%d", j);
		}
		for(j=i-1; j>=1; j--)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
