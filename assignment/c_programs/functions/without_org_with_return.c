//wit ret wirhout org
/***#include<stdio.h>
int fun(void);

int main()
{	int k;
	k=fun();
        printf("addddd k=%d\n",k);
}
int fun(void)
{
	int a=10,b=12,c;
	c=a+b;
//	printf("addition of a and b    %d\n",c);
	return c;

}
//with out arg with out ret
#include<stdio.h>
void fun(void);

int main()
{       
       
        fun();
}
void fun(void)
{
        int a=10,b=12,c;
        c=a+b;
        printf("addition of a and b    %d\n",c);
        

}
//with arg without return
//
#include<stdio.h>
void fun(int ,int  );

int main()
{
        int a=10,b=10;
        fun(a,b);
}
void fun(int x ,int y)
{
        int c;
        c=x+y;
        printf("addition of a and b    %d\n",c);


}
*/
//with ret with arg
#include<stdio.h>
int  fun(int ,int  );

int main()
{
        int a=10,b=10,k;
       k= fun(a,b);
       printf("addition of two numbers:%d"k);
}
int fun(int x ,int y)
{
        int c;
        c=x+y;
       // printf("addition of a and b    %d\n",c);
        return c;

}
