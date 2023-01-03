//toggle a bit 

/*
#include<stdio.h>
void main()
{
	int res,num,pos;
	printf("enter the number: ");
	scanf("%x",&num);
	printf("enter the position: ");
	scanf("%x",&pos);
	printf("the result of toggl a bit: ");
	res = (num ^ ((0x01<<pos)));
	printf("%x",res);
}
*/

#include<stdio.h>
void func(unsigned int *addr,int pos);
void main()
{
	int num,pos;
	printf("enter the number:\n");
	scanf("%x",&num);
	printf("enter the position:\n");
	scanf("%d",&pos);
	printf("before toggle bits:%x\n",num);
	func(&num,pos);
}
void func(unsigned int *addr,int pos)
{
	int macro;
	macro = (0x01<<pos)^(*addr);
	printf("after toggling bits:%x\n",macro);
}
