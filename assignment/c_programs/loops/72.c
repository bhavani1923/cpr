/****************************************/ /*********************************

	72.Write a C program to print all ASCII character with their values.

**************************************/ /***************************************/


#include <stdio.h>

void main()
{
    int i,n;
    printf("enter the number= ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        printf("ASCII value of character %c = %d\n",i,i);
    }
}
