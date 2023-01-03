/***********************************************/ /**********************************************

		229.Write a C program to search an element in an array.


********************************************/ /*************************************************/


#include<stdio.h>
void main()
{
	int A[20],i,flag,key,size;
	printf("enter the size: \n");
	scanf("%d",&size);
	
	printf("Enter the elements of an array\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&A[i]);
	}
	printf("the elements of matrix is:\n");
	for(i=0; i<size; i++)
	{
		printf("%d ",A[i]);
	}
	printf("enter the key:\n");
	scanf("%d",&key);
	for(i=0;i<size;i++)
	{
		if(A[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("given key is in the list\n");
	}
	else
	{
		printf("given key is not in the list\n");
	}
	
}
