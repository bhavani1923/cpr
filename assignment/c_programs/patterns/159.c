/*********************************************/ /*******************************************

	
		7.3. Triangle 0,1 easy patterns

1
00
111
0000
11111

159.Number pattern 36


**********************************************/ /******************************************/



#include<stdio.h>
void main()
{
	int i,j,n,k=1;
	printf("enter the number of rows and columns: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if( k%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}

		}
		k++;
	
		printf("\n");
	}

}
