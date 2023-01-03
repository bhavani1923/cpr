/*********************************//********************


	7.9. List of various star pattern series and solution in C programming:



*****
 ****
  ***
   **
    *
195.Inverted mirrored right triangle


********************************//******************************/




#include<stdio.h>
void main()
{
	int i,j,k,n;
        printf("enter any number: ");
        scanf("%d",&n);
	for(i=n; i>=1; i--)
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
