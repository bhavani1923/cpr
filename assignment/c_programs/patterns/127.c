/*******************************************//************************************

7.1. Square number patterns
11111
10001
10001
10001
11111
127.Number pattern 4

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
			if(i==1 || j==1|| i==5 || j==5)
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

