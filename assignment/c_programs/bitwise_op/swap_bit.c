//swap nibble

/*
#include<stdio.h>
void main()
{
	int num,res;
	printf("enter the number: ");
	scanf("%x",&num);

	res = (num & 0x0f)<<4 | (num&0xf0)>>4;
	printf("after swap nibble:%x",res);
	printf("\n");
}

*/
//swap byte

/*
#include<stdio.h>
void main()
{
	int num,res;
	printf("enter the number:\n");
	scanf("%x",&num);
	res = (((num | 0x00ff)>>8)|((num & 0x00ff)<<8));
	printf("after swap byte:%x",res);
	printf("\n");
}
*/

//swap byte

/*
#include<stdio.h>
void main()
{
        int num,res;
        printf("enter the number:\n");
        scanf("%x",&num);
        res = (((num & 0xff00)>>8)|((num & 0x00ff)<<8));
        printf("after swap byte:%x",res);
        printf("\n");
}
*/


//swap 2 bits
/*

#include<stdio.h>
void main()
{
	int num,pos1,pos2,res;
	printf("enter the number:");
	scanf("%x",&.num);
	printf("enter the position:");
	scanf("%x%x",&pos1,&pos2);
	if(((num>>pos1)&0x01) == ((num >>pos2)&0x01))
	{
		printf("given bits are equal\n");
	}
	else
	{
		res = num^((0x01<<pos1) |(0x01<<pos2));
		printf("swap bits=%x\n",res);
	}
}

*/
/*
#include<stdio.h>
void main()
{
	int num,pos1,pos2,x,y;
	printf("enter the number:");
	scanf("%x",&num);
	printf("enter the positions:");
	scanf("%x%x",&pos1,&pos2);
	x=num&(0x01<<pos1);
	y=num&(0x01<<pos2);
	if(x^y)
	{
		unsigned int temp;
		temp = 0x01;
		temp = (temp<<pos1)|(temp<<pos2);
		num = num^temp;
		printf("%x\n",num);
	}
}


//swap word

#include<stdio.h>
void main()
{
	int num,res;
       	printf("enter character:");
	scanf("%x",&num);
	res = (((num&0x0000ffff)<<16) | ((num&0xffff0000)>>16));
	printf("%x",res);
}

*/

/*
#include<stdio.h>
void main()
{
	int num,pos,res;
	printf("enter the number:");
	scanf("%x",&num);
	res = ((num&0xf000)>>8 | (num & 0x0f00)>>8 | (num&0x00f0)<<4 | (num & 0x000f) << 12);
	 printf("%x",res);
} 
*/

#include<stdio.h>
void main()
{
	int num,pos;
	printf("enter the number: ");
	scanf("%d",&num);
	printf("enter the position: ");
	scanf("%d",&pos);
	num = (num&0x0000000f)<<pos | (num & 0xf0000000)>>pos;
	printf("%d",num);
}

