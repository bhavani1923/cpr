#include<stdio.h>
void main()
{
	int i,j,sp=1;
	for(i=1;i<=5;j++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5 || i==1 || i==3)

				printf("*");
			else
				printf(" ");
		}
		for(sp=1;sp<=3;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=5;j++)
		{
			if(((i==1 || i==2 || i==3) && (j==1 || j==5)) || (i==4 && (j==2 || j==4)) || (i==5 && (j==3)))
				printf("*");
			else
				printf(" ");
		}
		for(sp=1;sp<=3;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=5;j++)
		{
			if(i==1 || i==5 || j==3)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}

