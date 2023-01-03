/*********************************//********************


        7.9. List of various star pattern series and solution in C programming:



* * * * *
  *     *
    *   *
      * *
        *
196.hollow Inverted mirrored right triangle


********************************//******************************/



#include<stdio.h>
void main()
{
        int i,j,k,n;
        printf("enter any number: ");
        scanf("%d",&n);
        for(i=1; i<=n; i++)
        {
		for(j=1;j<=n;j++)
		{
			if((i==j)||(j==n)||(i==1))
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


