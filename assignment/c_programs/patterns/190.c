/*****************************//***********************


*
**
* *
*  *
*****
190.
Hollow right triangle

*****************************//**********************/

#include<stdio.h>

void main()
{
        int i,j,n;
        printf("enter number of lines: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
		{
			if(j==1 || i==n || j==i )
			{
				printf("* ");
			
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
        }

}

