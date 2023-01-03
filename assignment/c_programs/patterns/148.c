/***************************************************//***************************************

	7.2. Triangle easy number pattern

12345
1234
123
12
1
148.Number pattern 20

***************************************************//***************************************/


#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the rows: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

