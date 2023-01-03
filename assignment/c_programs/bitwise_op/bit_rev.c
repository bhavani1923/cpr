// bit reverse
/*
#include<stdio.h>
void main()
{
	int n,r=0,i,rev_bits=0;
	printf("enter the number: ");
	scanf("%d",&n);
	if(n<16)
	{
		for(i=0;i<4;i++)
		{
			if(((n>>i)&1)!=0)
			{
				r=r|(1<<(3-i));
			}
		}
		printf("%d\n",r);
	}
	else
	{

	
		while(n>0)

		{
	
			rev_bits = rev_bits << 1;

			if(n & 1 == 1)
			{
				rev_bits = rev_bits ^ 1;
			}
			n = n >> 1;
		}
		printf("the reversed resultant = %d\n",rev_bits);
	}
}
*/

#include<stdio.h>
void main()
{
	int num,i,rev=0;
	printf("enter the number:");
	scanf("%x",&num);

	for(i=0;i<32;i++)
	{
		if((num>>i)&0x01)
		{
			rev = rev|(0x01<<(31-i));
		}
	}
	
	
	printf("reverse of a number:%x\n",rev);

}

