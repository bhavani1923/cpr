/*******************************************//************************************

7.1. Square number patterns
11111
11111
11011
11111
11111
128.Number pattern 5

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
			if(i==(n+1)/2 && j==(n+1)/2 )
			{
                        	printf("0");
			}
			else
			{
				printf("1");
			}
                }
                printf("\n");
        }
}

