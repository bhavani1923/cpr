
/*
#include<stdio.h>

void main()

	int num,pos,res;
	printf("enter the number= ");
	scanf("%x",&num);
	printf("enter the position= ");
	scanf("%x",&pos);
	printf("the result of single bit set");
	res = (num | (0x01<<pos));
	printf("%x",res);
}

{
	int num,pos,res;
	printf("enter the number= ");
	scanf("%x",&num);
	printf("enter the posision= ");
	scanf("%x",&pos);
	printf("the result of conjugative bits:")
	res = (num | (0x03<<pos));
	printf("%x",res);
	printf("\n");
}

{
	int num,pos1,pos2,res;
	printf("enter the number= ");
	scanf("%x",&num);
	printf("enter the posisions:\n");
	scanf("%x%x",&pos1,&pos2);
	printf("the result of non-conjugative bits:");
	res = num |((0x01<<pos1) | (0x01<<pos2));
	printf("%x",res);
	printf("\n");
}

*/
/*
{
    unsigned int num;
    int result, pos1,pos2,pos3,pos4,pos5,pos6,pos7,pos8,i;
    printf("Enter the unsigned integer:\n");
    scanf("%x", &num);
    printf("enter position to be searched\n");
    scanf("%x%x%x%x%x%x%x%x", &pos1,&pos2,&pos3,&pos4,&pos5,&pos6,&pos7,&pos8);
    
    for(i=31; i>0; i--)
    {
    	if ((num>>i) & 0x01)
        	printf("BIT IS SET=%d\n",i);
    	else
    	{
        	printf("BIT IS NOT SET=%d\n",i);
    	}
    }
}



{
	//set bit count
	
	int i,n,count=0;
       	printf("enter the number: ");
	scanf("%x",&n);
	printf("bit count: ");
	for(i=31; i>=0; i--)
	{
		if((n>>i)&0x01)
		{
			count++;
		}
	}
	printf("%d",count);
	printf("\n");

}

*/

//set group_of_bits in run time

#include<stdio.h>
void display(int);
void main()
{
	int num,pos1,pos2,diff,i,macro;
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter positions:");
	scanf("%d%d",&pos1,&pos2);
	printf("before setting bits:\n");
	display(num);
	diff = pos2 - pos1;
	macro = 0x01;
	for(i=0; i<diff; i++);
	{
		macro = macro|(0x01<<i);
	}
	num = num|(macro<<pos1);
	printf("\n");
	printf("after setting bits:\n");
	display(num);
}
void display(int num)
{
	int i;
	for(i=15; i>=0; i--)
	{
		printf("%d\t",(num>>i)&0x01);
		if(i/4==0)
		{
			printf(" ");
		}
	}
}
