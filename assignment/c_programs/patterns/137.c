/************************************************//**********************************************


	7.1 sqaure number patterns

	55555
	54444
	54333
	54322
	54321

	137.number pattern 14


**********************************************//***********************************************/




#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=1;j--)
		{
			if(i<j)
			{
				printf("%d",j);
			}
			else
			{
				printf("%d",i);
			}
		

		
			
		}
		printf("\n");
	}
}

