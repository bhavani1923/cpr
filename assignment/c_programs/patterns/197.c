/******************************//******************************

	7.9. List of various star pattern series and solution in C programming:


	     *
   	   * * * 
 	 * * * * *
       * * * * * * *
     * * * * * * * * *
//197.Pyramid(Equilateral triangle)

*************************************//******************************/

#include<stdio.h>
void main()
{
       	int i,j,k,n;
        printf("enter number of lines: ");
        scanf("%d",&n);
       /* for(i=1;i<=n;i++)
        {
                for(j=n;j>=i;j--)
                {
                        printf(" ");
                }
                for(k=1;k<=i;k++)
                {
                        printf("* ");
                }
        
                printf("\n");
        }

}*/



	  for(i=n;i>=1;i--)
                {
                        for(j=1;j<=(2*n)-1;j++)
                        {
                                if(i==1)
                                {
                                        printf("* ");
                                }
                                else
                                        if(j<=i-1 || j>2*n-i)
                                        {
                                                printf("  ");
                                        }
                                        else
                                        {
                                                printf("* ");
                                        }
                        }
                        printf("\n");
                }
}

