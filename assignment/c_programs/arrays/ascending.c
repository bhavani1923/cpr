#include<stdio.h>
void main()
{
	int size,a[100],i,j,tem;
	printf("enter the size of array: ");
    	scanf("%d",&size);
	printf("enter the elements of array: ");
	for(i=0; i<size; i++ )
	{
		scanf("%d",&a[i]);
	}
	printf(" ascending order=");
	for(i=0; i<=size-1; i++)
	{
		for(j=0; j<size-1; j++)
		{
			if(a[j]>a[j+1])
			{
				tem=a[j];
				a[j]=a[j+1];
				a[j+1]=tem;
			}

		}
	}
	for(i=0; i<size; i++)
	{
	  printf(" %d\t ",a[i]);
	}
}
