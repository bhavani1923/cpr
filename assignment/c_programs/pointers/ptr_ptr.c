//pointer to pointer 


#include<stdio.h>

int main(void)
{
	int a = 5;
	int *p1;
	int **p2;
	p1 = &a;
	p2 = &p1;
	printf("address of a = %p\n",&a);
	printf("value of p1 = adress of a = %p\n",p1);
	printf("value of *p1 = value of a = %d\n",*p1);
	printf("address of p1 = %p\n",&p1);
	printf("value of p2 = adress of p1 = %p\n",p2);
	printf("valu of *p2 = value of p1 = %p\n",p1);
	printf("value of **p2 = value of a =%d\n",**p2);
	printf("address of p2 = %p\n",&p2);
}


