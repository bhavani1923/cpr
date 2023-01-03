/*******************************************//************************************

7.1. Square number patterns
1
11
101
1001
11111
160.Number pattern 1

********************************************//****************************************/



#include<stdio.h>
void main()
{
        int i,j,n,k=1;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
                {
			if(j==1 || i==n || i==j)
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


