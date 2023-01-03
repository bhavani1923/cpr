
//59.Write a C program to print multiplication table of any number.


#include<stdio.h>
void main()
{
        int n,i=1,result;
	printf("enter the number=");
       	scanf("%d",&n);
        do
        {
		result=n*i;	
       
                printf("%d * %d =%d\n",n,i,result);
       		i++;        	
	}
	while(i<=20);


}

