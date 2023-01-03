#include<stdio.h>
/*struct data
{
	int a;
	float b;
	char c;
};
void main()
{
	struct data d={10,20.7,'s'};
	printf("%d\n%f\n%c\n",d.a,d.b,d.c);
}
#include<stdio.h>
struct data
{
	char a;
	int b;
	float c;
};
void main()
{
	struct data d;
	printf("enter 3 values:\n");
	scanf("%c%d%f",&d.a,&d.b,&d.c);
	printf("the value of a is=%c\n",d.a);
	printf("the value of b is= %d\n",d.b);
	printf("the value of c is=%f\n",d.c);

}*/


union data
{
        
        int a;
        float b;
	char c;
};
void main()
{
        union data d;
        printf("%d\n",sizeof(d));

}

