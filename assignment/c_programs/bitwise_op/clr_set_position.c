/*

#include<stdio.h>
void main()
{
        int n,i,setcount=0,clrcount=0;
        printf("enter the number: ");
        scanf("%x",&n);
	printf("the setbit positions: ");
        for(i=31; i>=0; i--)
        {
                if((n>>i)&(0x01))
                {
		
                        printf("%d\t",i);
                }
		
	}
	printf("\n");
	printf("the clear bit positions: ");
        for(i=31; i>=0; i--)
	{
		if(!((n>>i)&0x01))
		{
		
      	        	printf("%d\t",i);
               	}
	}
	printf("\n");
}

*/
//clear to set,set to clear in a given number:


#include<stdio.h>
void main()
{
	int num,i,bit,bit1;
	printf("enter a number:\n");
	scanf("%x",&num);
	for(i=0; i<num; i++)
	{
		bit = ((num>>i)&0x01);
		if(bit==0)
		{
			bit1 = ~(bit);
		//	 printf("%x\n",bit1);
		}
		else
		{
			bit1 = ~(bit);
		//	 printf("%x\n",bit1);
		}
	}
	 printf("%x\n",bit1);

	
}
