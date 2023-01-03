#include<stdio.h>

void main()/*
{
	int num,pos,res;
	printf("enter the number: ");
	scanf("%x",&num);
	printf("enter the posision: ");
	scanf("%x",&pos);
	printf("the result of clear bit:");
	res = (num &(~(0x01<<pos)));
	printf("%x",res);
	printf("\n");
}


{
	int num,res,pos;
	printf("enter the number: ");
	scanf("%x",&num);
	printf("enter the pos: ");
	scanf("%x",&pos);
	printf("the consecative bits:");
	res = (num & (~(0x03<<pos)));
	printf("%x",res);
	printf("\n");
}

*/

{
	int num,pos1,pos2,res;
	printf("enter the number: ");
	scanf("%x",&num);
	printf("enter the positions: ");
	scanf("%x%x",&pos1,&pos2);
	printf("the result of non-conjugative:");
	res = (num & ((~(0x01<<pos1)) & (~(0x01<<pos2))));
	printf("%x",res);
	printf("\n");
}


/*
{
        //clear bit count

        int i,n,count=0;
        printf("enter the number: ");
        scanf("%x",&n);
        printf("bit count: ");
        for(i=31; i>=0; i--)
        {
                if(!((n>>i)&0x01))
                {
                        count++;
                }
        }
	printf("the clear bit count: ");
        printf("%d",count);
        printf("\n");

}







{
	int num,pos1,pos2,res,res1;
	printf("enter the number:\n");
	scanf("%x",&num);
	printf("enter the positions:\n");
	scanf("%x%x",&pos1,&pos2);
	printf("before clear bit:\n");
	res = (~(0x01<<pos1))&(~(0x01<<pos2));
	res1 = num & res;
	printf("%x",res1);
}
*/
