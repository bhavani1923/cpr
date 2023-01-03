/*****************************************************************/ /**********************************************************
		

			239. write a cprogram multiply the two arrays

************************************************************/ /**************************************************************/



#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,col,row;
	printf("enter the row and col of the matrices:\n");
	scanf("%d%d",&row,&col);
	printf("enter the elments of the a matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("the elemts of the a matrix are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the elements of b matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("the elements of the b matrix are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			mul[i][j]=0;
			for(k=0;k<row;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			
			}
			printf("\n");
		}
		
	}
	printf("mul of two matrices are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}


}

