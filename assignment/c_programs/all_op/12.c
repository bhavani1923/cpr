/********************************************/ /*********************************

	12.Write a C program to enter two angles of a triangle and find the third angle.

*******************************************/ /***********************************/


#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter values of a and b:\n");
	scanf("%d%d",&a,&b);
	c=180-a-b;
	printf("%d\n",c);
}
