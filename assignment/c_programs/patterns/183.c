
/**********************************/ /***************************


		7.9. List of various star pattern series and solution in C programming:

		
		
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	* * * * *
	
	
	183.Square


*******************************/ /*******************************/



#include<stdio.h>
void main()
{
	int i,j,row,col;
	printf("enter the no of rows and columns:\n");
	scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=col;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}

