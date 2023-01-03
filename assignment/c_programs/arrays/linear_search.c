#include<stdio.h>
void main()
{
	int n,a[10]={ 1,2,3,4,5,6,7,8,9,10 },i,flag;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=0; i<10;i++)
	{
		if(a[i]==n)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("%d is serched  array\n",n);
	}
	else
	{
		printf("%d is not in searched array\n",n);
	}
}

