#include<stdio.h>
void main()
{
	int a[]={0,1,-1};
	int *p;
	p=a;
	printf("%d\t%d\t%d\t",(*p)++,*p++,*++p);
	printf("\n");
}
