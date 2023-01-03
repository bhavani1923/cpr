/***************************************/ /***********************************    
    1
   22
  333
 4444
55555
143.Number pattern 20

**************************************/ /***********************************/


#include<stdio.h>
void main()
{
	int i,j,k,row,col;
	printf("enter the number of rows and colums: ");
	scanf("%d%d",&row,&col);
	for(i=1; i<=row; i++)
	{
		for(j=i; j<col; j++)
		{
			printf(" ");
		}
		for(k=1; k<=i; k++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}

