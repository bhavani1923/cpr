#include<stdio.h>
void main()
{

	int i,size,n,a[20],index,low,high,mid,array;
	printf("enter the size of the array : ");
	scanf("%d",&size);
	printf("enter the elements (in sorted order) : ");
	for(i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched : ");
	scanf("%d",&n);
	low=0;
	high=size-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]<n)
		
		 {
			low=mid+1;
		}
		else 
			if(a[mid]==n)
			{
				printf("%d is at array location",mid+1);
				break;
			}
			else
				high = mid-1;
				mid =(low+high)/2;
	}
	if(low>high)
	{
		printf("not found : %d is not in the list\n",n);
	}
}
