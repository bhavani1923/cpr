/*******************************************//************************************

7.1. Square number patterns
10001
01010
00100
01010
10001
131.Number pattern 8

********************************************//****************************************/



#include<stdio.h>
void main()
{
        int i,j,n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=n;j++)
                {
			if(i==j || i+j==n+1)
			{
                        	printf("1");
			}
			else
			{
				printf("0");
			}
                }
                printf("\n");
        }
}

