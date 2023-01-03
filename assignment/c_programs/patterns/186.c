

/*****************************************//****************************

		7.9. List of various star pattern series and solution in C programming:



		      * * * * *
		  
		    *       *

		  *       *
		 
		*       *
	
	      *      *
	     
	    * * * * *
186.Hollow Rhombus
****************************************//***************************/

#include<stdio.h>
void main()
{
        int i,j,k,n;
        printf("enter the number: ");
        scanf("%d",&n);
        for(i=n;i>=1;i--)
        {
                for(j=1;j<=i;j++)
                {
                        printf(" ");
                }
                for(k=1;k<=n;k++)
                {
                       if(k==1 || k==n || i==1 || i==n)
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

