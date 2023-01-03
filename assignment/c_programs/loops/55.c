//55.Write a C program to print all odd number between 1 to 100.

#include<stdio.h>
void main()
{
   /*     int sum,a;
	a=1;
	printf("enter the number:\n");
	scanf("%d",&sum);
        do
        {
		a=a+2;
                printf("%d  ",a);

        }

        while(a<=100);
        {
                printf("  %d ",a);
                a=a+2;
                if(a==0)
                {
                        break;
                }
        }*/

	

	int i,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(i%2!=0)
		{
			printf("%d\t",i);
		}
	}
	printf("\n");
}                           
