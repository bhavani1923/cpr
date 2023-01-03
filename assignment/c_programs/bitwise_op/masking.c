/*

#include<stdio.h>
void main()
{
	int x,mask=0x20;
	printf("enter the number:");
	scanf("%x",&x);
	x=x|mask;
	printf("%x\n",x);
}




#include<stdio.h>
void main()
{
        int x,mask=0x20;
        printf("enter the number:");
        scanf("%d",&x);
        x=x^mask;
        printf("%d\n",x);
}

*/


#include<stdio.h>
void main()
{
        int x,mask=0xfffffff0;
        printf("enter the number:");
        scanf("%x",&x);

        x=x&mask;
	x=x&~0xf;
        printf("%x\n",x);

	
}
