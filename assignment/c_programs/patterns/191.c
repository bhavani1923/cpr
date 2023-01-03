/**************************************//**************************

		7.9. List of various star pattern series and solution in C programming:



					
        *
      * *
    * * *
  * * * *
* * * * *

191.Mirrored right triangle(2nd quardrant)     


****************************************//***********************/
        
        

#include<stdio.h>

void main()
{

                int i,j,k,n;
                printf("enter any number: ");
                scanf("%d",&n);

                for(i=1; i<=n; i++)
                {
                        for(j=n-1; j>=i; j--)
                        {
                                printf(" ");
                        }
                        for(k=1; k<=i; k++) 
                        {
                                printf("*");
                        }
                        printf("\n");
                }
                
        
}


