//call by value
/*

#include<stdio.h>
void fun(int,int);
int main()
{
	int a,b;
	printf("enter the a and b values\n");
	scanf("%d%d",&a,&b);
	fun(a,b);
//	printf("%d%d",a,b);
}
void fun(int a,int b)
{
	printf("%d",a+b);
}

#include<stdio.h>
void fun(int,int);
int main()
{
        int a,b;
        printf("enter the a and b values\n");
        scanf("%d%d",&a,&b);
        fun(a,b);
      printf("%d%d",a,b);
}
void fun(int a,int b)
{
	 a = 10,b = 10;
        printf("%d",a+b);
}
*/

#include<stdio.h>
void fun(int*,int*);
int main()
{
        int a,b;
        printf("enter the a and b values\n");
        scanf("%d%d",&a,&b);
        fun(&a,&b);
      printf("%d%d",a,b);
}
void fun(int *a,int *b)
{
        *a=10,*b=20;		
        printf("%d",*a+*b);
}


