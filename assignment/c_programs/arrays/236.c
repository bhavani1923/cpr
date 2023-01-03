/**************************************************/ /******************************************

	236.Write a C program to add two matrices.


*************************************************/ /*********************************************/

/*
#include<stdio.h>
void main()
{
	int a[10],size,b[10],sum[10],i;
	printf("enter the size of number: ");
	scanf("%d",&size);
	printf("enter the matrix of a\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the matrices of a array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("enter the matrices of b:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("the matrices of b array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",b[i]);
	}
	for(i=0;i<size;i++)
	{
		sum[i]=a[i]+b[i];
	}
	printf("sum a matrix and b matrix of arrays\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",sum[i]);
	}
}

*/


/**************************************************/ /******************************************

        236.Write a C program to add two matrices.


*************************************************/ /*********************************************/





#include<stdio.h>
void main()
{
	int i,j,a[10][10],b[10][10],sum[10][10],size;
	printf("enter the size of the matrix:\n");
	scanf("%d",&size);
	printf("enter the matrices of a :\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("enter matrices of a are:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the matrices of b:\n");
	for(i=0;i<size;i++)
	{
		for(j=-0;j<size;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("the matrices of b are:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			sum[i][j]=(a[i][j])+(b[i][j]);
		}
		printf("\n");
	}
	printf("sum of the two matrices are:\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

	
