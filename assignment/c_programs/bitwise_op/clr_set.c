#include<stdio.h>
void main()
{
	int n,i,setcount=0,clrcount=0;
	printf("enter the number: ");
	scanf("%x",&n);
	for(i=31; i>=0; i--)
	{
		if((n>>i)&(0x01))
		{
			setcount++;
		}
		else
		{
			clrcount++;
		}
	}
	printf("clear bit count: %d ,setbitcount=%d",clrcount,setcount);
	printf("\n");
}


