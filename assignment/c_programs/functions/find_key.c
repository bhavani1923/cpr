/****************************************//********************************


	write a c program to find a key from the list using the functions.

**************************************/ /**********************************/


#include<stdio.h>
void search(int[],int,int);
void main()
{
	int a[10],size,key,i,flag=0;
	printf("enter the size of array=");
	scanf("%d",&size);
	printf("enter the elements\n");
	for(i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key=");
	scanf("%d",&key);
	search(a,key,size);
}

void search(int a[],int key,int size)
{
	int i=0,flag=0;
	for(i=0; i<size; i++)
	{
		if(key==a[i])
		{
			flag=1;
			break;
		}
	}
	printf("%d",key);
	if(flag==1)
	{
		printf("given key is found in the list\n");
	}
	else
	{
		printf("given key is not found in the list\n");
	}
}

