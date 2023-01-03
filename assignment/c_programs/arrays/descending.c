#include<stdio.h>
void main()
{
	int i,j,size,n,temp,a[50];
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the elements of an array: ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("descending order= ");
	for(i=0; i<size-1; i++)
	{
		for(j=0; j<size-1; j++)
		{
			if(a[j]<a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
	}
	for(i=0; i<size; i++)
	{

		printf("%d\t",a[i]);
	}
}

