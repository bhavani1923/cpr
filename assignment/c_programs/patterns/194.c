/*****************************************//************************************

	7.9. List of various star pattern series and solution in C programming:


* * * * *

*     *
  
*   *

* *

*
194.Hollow inverted right triangle	


***************************************//************************************/



#include<stdio.h>

void main()
{
	int i,j,k,n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
                for(k=1;k<=n;k++)
                {
			if(k==1 || k==i || j==n || i==n)
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

