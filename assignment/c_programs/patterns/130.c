/*******************************************//************************************

7.1. Square number patterns
11011
11011
00000
11011
11011
124.Number pattern 1

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
			if(i==3 || j==3)
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

