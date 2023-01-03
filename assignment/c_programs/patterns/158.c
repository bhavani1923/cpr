/*********************************************/ /*******************************************

	
		7.3. Triangle 0,1 easy patterns

1
10
101
1010
10101

158.Number pattern 35


**********************************************/ /******************************************/



#include<stdio.h>
void main()
{
	int i,j,n,k=5;
	printf("enter the number of rows and columns: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)

		{
			/*if(j%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}*/
			printf("%d",j&1);

			
		}

	
	
		printf("\n");
	}

}
