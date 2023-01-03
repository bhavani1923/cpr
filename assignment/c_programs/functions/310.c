/**********************************************/ /*********************************

        308.Write a C program to print sum of all natural numbers between 1 to n using 
        recursion.

*******************************************/ /************************************/


#include<stdio.h>
int natural(int);
int main()
{
        int n,i,sum;
        printf("enter the number from 1 to ");
        scanf("%d",&n);

        natural(n);
	
}


int natural(int n)
{
        int i,sum;
        for(i=1; i<=n; i++)
        {
                
		sum =sum+i;
		
			
        }
	 printf("sum of natural between 1 to %d\n =%d\n",i-1,sum);
	
       
}
