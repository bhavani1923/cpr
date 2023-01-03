/****************************************//************************************

	7.9. List of various star pattern series and solution in C programming:


	*********
	 *******
	  *****
	   ***
	    *
199. inverted pyramid

***************************************//*************************************/


#include<stdio.h>
void main()
{
        int i,j,k,n;
        printf("enter any number: ");
        scanf("%d",&n);
        for(i=n; i>=1; i--)
        {
                for(j=i; j<=n; j++)
                {
                        printf("  ");
                }
                for(k=1; k<=(2*i-1); k++)

                {
			printf("* ");
                }
                printf("\n \n");
         }

}
