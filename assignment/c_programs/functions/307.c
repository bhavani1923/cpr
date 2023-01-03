/****************************************/ /******************************************

	307.Write a C program to find power of any number using recursion.

***************************************/ /*******************************************/


#include<stdio.h>
#include<math.h>
int power(int,int);
int main()
{
	int base,expon,s;
	printf("enter any two numbers\n");
	scanf("%d%d",&base,&expon);

	power(base,expon);
	
}
int power(int x,int y)
{
	int s;
	//s=x*pow(x,y-1);
	s=pow(x,y);
	printf("power of a number = %d\n",s);
}

