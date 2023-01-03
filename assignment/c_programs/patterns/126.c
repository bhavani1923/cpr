/*******************************************//************************************

7.1. Square number patterns
01010
01010
01010
01010
01010
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
			if(j==2 || j==4)
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

