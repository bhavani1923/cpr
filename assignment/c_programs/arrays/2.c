#include<stdio.h>
void main()
{
	int address,rem,sub,array;
	printf("enter the adderss: ");
	scanf("%d",&address);
/*	{
		rem=address%4;
		sub=4-rem;
		array=address+sub;
		printf("4 byte aligned valid arrays=%d\n",array);
	}*/



/*	{
		rem=address%8;
		sub=8-rem;
		array=address+sub;
		printf("8 byte aligned valid array=%d\n",array);
	}
	*/

	while(address%4!=0)
	{
		address++;
	}
	printf(" valid addresses=%d\n",address);
}
