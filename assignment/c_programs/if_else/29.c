//to input month number and print days in month.
#include<stdio.h>
void main()
{
	int M;
	printf("enter month number\n");
	scanf("%d",&M);
	if((M==1) || (M==3) || (M==5) || (M==7) || (M==8) || (M==10) || (M==12))
	{
		printf("31 days\n");
	}
	else
	{
		if((M==4) || (M==6) || (M==9) || (M==11))
		{
			printf("30 days\n");
		}
		else
		{
			if(M==2)
			{
				printf("28/29 days\n");
			}
		}
	}
}
