/******************************************/ /*******************************************

	write a cprogram to perform addition ,substraction,multiplication of two dimentional array using functions,switch_case,and menu,intractive based menu.

*****************************************/ /***********************************************/


#include<stdio.h>
void matr_add(int [][30],int [][30],int,int,int,int);
void matr_sub(int [][30],int [][30],int,int,int,int);
void matr_mul(int [][30],int [][30],int,int,int,int);

void main()
{
	int a[10][10],b[10][10],i,j,r1,c1,r2,c2,choice;
	char c='y';

	do
	{
		printf("\n \t WELCOME TO MATRIX CALCULATOR\n **************************  select an option from below menu  1) additon=1		2) substraction=2	3) multiplication=3	4) all=4	");
		scanf("%d",choice);
		printf("\n enter the dimensions of the matrix1,such that row after column\n");
		scanf("%d%d",&r1,&c1);
		printf("\n enter the dimensions of matrix2,such that row after column\n");
		scanf("%d%d",&r2,&c2);
		printf("\n enter the elements of matrix1\n");
		for(i=0; i<r1; i++)
		{
			for(j=0; j<c1; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("\nenter the elements of matrix2\n");
		for(i=0; i<r2; i++)
		{
			for(j=0; j<c2; j++)
			{
				scanf("%d",b[i][j]);
			}
		}



		switch(choice)
		{
			case 1:
				matr_add(a,b,r1,c1,r2,c2);
				break;
			case 2:
				matr_sub(a,b,r1,c1,r2,c2);
				break;
			case 3:
				matr_mul(a,b,r1,c1,r2,c2);
			case 4:
				matr_add(a,b,r1,c1,r2,c2);
				matr_sub(a,b,r1,c1,r2,c2);
				matr_mul(a,b,r1,c1,r2,c2);
				break;
			default:
				printf("\ninvalid choice\n");
		}

		printf("\n do you want to perform another operation\ny/n\n");
	}

