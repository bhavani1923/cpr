/**************************************//******************************


7.9. List of various star pattern series and solution in C programming:
					 
					 
*
**
***
****
*****
189.Right triangle(1st quadrant)

*********************************//*******************************/



#include<stdio.h>

void main()
{
        int i,j,n;
        printf("enter number of lines: ");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                for(j=1;j<=i;j++)
                
                        printf("* ");
                        
        printf("\n");
        }
        
}

