/******************************//******************************

        7.9. List of various star pattern series and solution in C programming:


             
      * * * * * * * * *
        
        *           *
	
	  *       *
	    
	    *   *
	    
	      *           
//200.Pyramid(Equilateral triangle)

*************************************//******************************/




#include<stdio.h>

void main()
{

                int i,j,k,n;
                printf("enter any number: ");
                scanf("%d",&n);

           	for(i=1; i<=n; i++)
                {
                 	for(j=1; j<i; j++)
                 	{
                         	printf(" ");
                
			}
                	for(k=1; k<=(n*2-(2*i-1)); k++)

                	{
				if(i==1 || k==1 || k==(n*2-(2*i-1)))
				{
                        		printf("*");
				}
				else
				{
					printf(" ");
				}
                	}
                printf("\n");
         }

}	

