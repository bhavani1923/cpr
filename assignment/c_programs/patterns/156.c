/***************************************************//***************************************

	7.2. Triangle easy number patterns


56789
4567
345
23
1

156.Number pattern 33

***************************************************//***************************************/


#include<stdio.h>
void main()
{
	int i,j,n,k;
	printf("enter the rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
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

