#include<stdio.h>
void main()/*
{
	int n,pos,res;
	printf("enter the number: ");
	scanf("%x",&n);
	printf("enter the posision:");
	scanf("%x",&pos);
	printf("the result of set a bit: ");
	res = (n | (0x01<<pos));
	printf("%x",res);
	printf("\n");
}


{
	int n,pos,res;
	printf("enter the number: ");
	scanf("%x",&n);
	printf("enter the posision: ");
	scanf("%x",&pos);
	printf("the result of conjugation of bits:");
	res = (n|(0x03<<pos));
	printf("%x",res);
}



{
	int n,pos1,pos2,res;
	printf("enter the number: ");
	scanf("%x",&n);
	printf("enter the positions: ");
	scanf("%x%x",&pos1,&pos2);
	printf("the result of non-conjugative bits: ");
	res = (n | (0x01<<pos1)) | (n | (0x01<<pos2));
	printf("%x",res);
	printf("\n");
}

{
	int n,pos,res;
	printf("enter the number: ");
	scanf("%x",&n);
	printf("enter the position: ");
	scanf("%x",&pos);
	printf("the result of clear bit: ");
	res = (n & (~(0x01<<pos)));
	printf("%x",res);
	printf("\n");
}
*/

//23/12/22

/*
 * set
{
	int n,pos;
	printf("enter the number: ");
	scanf("%x",&n);
	printf("enter the position:");
	scanf("%x",&pos);
	n=n|(0x01<<pos);
	printf("%x\n",n);
}




**clear	
{
        int n,pos;
        printf("enter the number: ");
        scanf("%x",&n);
        printf("enter the position:");
        scanf("%x",&pos);
        n=n&(~(0x01<<pos));
        printf("%x\n",n);
}

**toggle

{
        int n,pos;
        printf("enter the number: ");
        scanf("%x",&n);
        printf("enter the position:");
        scanf("%x",&pos);
        n=n^(0x01<<pos);
        printf("%x\n",n);
}






{
        int n,pos1,pos2;
        printf("enter the number: ");
        scanf("%x",&n);
        printf("enter the position:");
        scanf("%x%x",&pos1,&pos2);
        n=((n|(0x01<<pos1))|(n|(0x01<<pos2)));
        printf("%x\n",n);
}



{
        int n,pos1,pos2;
        printf("enter the number: ");
        scanf("%x",&n);
        printf("enter the position:");
        scanf("%x%x",&pos1,&pos2);
        n=((n|(0x01>>pos1))|(n|(0x01<<pos2)));
        printf("%x\n",n);
}



{
        int n,pos1,pos2;
        printf("enter the number: ");
        scanf("%x",&n);
        printf("enter the position:");
//	scanf("%x",&pos1);
        scanf("%x%x",&pos1,&pos2);
        n=n&(~(0x01<<pos1)&~(0x01<<pos2));
        printf("%x\n",n);
}



{
	int n,count=0,i;
	printf("enter the number: ");
	scanf("%x",&n);
	for(i=0;i<32;i++)
	{
		if((n>>i)&0x01)
		{
			count++;
		}
	}
	printf("%x",count);
}

*/

/*
{
	int n,pos;
	printf("enter the number: ");
	scanf("%x",&n);
	printf("enter the positon: ");
	scanf("%x",&pos);
	n=n&(~(0x01>>pos));
	printf("%x\n",n);
}

*/


{
	int n,pos;

	printf("enter the number: ");
	scanf("%x",&n);
	printf("enter the position: ");
	scanf("%x",&pos);

	n=n&(0x01>>pos);
	printf("%x\n",n);
}
