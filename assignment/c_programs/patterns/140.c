/********************************************//***************************************


	7.1 square number pattern


	12345
	21234
	32123
	43212
	54321

	140. number pattern 17


*****************************************//*************************************/


#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the numbers: ");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		for(j=i;j>1;j--)
		{
			printf("%d",j);
		}
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
