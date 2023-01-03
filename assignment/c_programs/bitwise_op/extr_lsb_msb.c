//extract LSB 


#include<stdio.h>
void main()
{
	int num,pos,res;
	printf("enter the number:");
	scanf("%x",&num);
	printf("enter the position:");
	scanf("%d",&pos);
	res = (num>>pos)&0x01;
	printf("%x",res);
}


//extract MSB 
/*

#include<stdio.h>
void main()
{
        int num,pos,res;
        printf("enter the number:\n");
        scanf("%x",&num);
        printf("enter the position:\n");
        scanf("%d",&pos);
        res=((num>>pos)&0x01);
        printf("%x\n",res);
}

*/

