#include<stdio.h>
void main()
{
	int  a[5]={1, 2, 3, 4, 5};
	printf("%d %d %d %d %d\n",a[0],a[1],a[2],a[3],a[4]);
	printf("%p\n",&a);
	printf("%p %p %p %p %p\n",&a[0],&a[1],&a[2],&a[3],&a[4]);

}
