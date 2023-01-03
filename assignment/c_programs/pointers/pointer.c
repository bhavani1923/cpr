// 9.1 to print address of variable using adress operator


#include<stdio.h>
void main()
{
	int age=24;
	float salary=1500.50;
	printf("address of age =%p\n",&age);
	printf("adrees of salary=%p\n",&salary);
}


// 9.2 derefrencing pointer variable


#include<stdio.h>
void main()
{
        int a=20;
        float b=12.5;
        int *p1=&a;
        float *p2=&b;
        printf("adress of a=%x\n",p1);
        printf("value of p1=%p\n",*p1);

        printf("value of p2=address of b=%p\n",p2);
        printf("address of p1=%p\n",&p1);
        printf("adress of p2=%p\n",&p2);
        printf("value of a= %d %d %d\n",a,*p1,*(&a));
        printf("value of b= %f %f %f\n",b,*p2,*(&b));
}



// 9.3 to print size of pointer variables ansd size of values dereferenced by them



#include<stdio.h>
void main()
{
        char a='x',*p1=&a;
        int b=12,*p2=&b;
        float c=12.4,*p3=&c;
        double d=18.34,*p4=&d;
        printf("sizeof(p1)=%lu sizeof(*p1)=%lu\n",sizeof(p1),sizeof(*p1));
        printf("sizeof(p2)=%lu sizeof(*p2)=%lu\n",sizeof(p2),sizeof(*p2));
        printf("sizeof(p3)=%lu sizeof(*p3)=%lu\n",sizeof(p3),sizeof(*p3));
        printf("sizeof(p4) =%lu sizeof(*p4)=%l//derefrencing pointer variable\n",sizeof(p4),sizeof(*p4));
}



// 9.4 pointer arithmetic


#include<stdio.h>
void main()
{
        int a=5,*pi=&a;
        char b='x',*pc=&b;
        float c=12.5,*pf=&c;
        printf("value of pi = address of a = %p\n",pi);
        printf("value of pc = address of b = %p\n",pc);
        printf("value of pf = address of c = %p\n",pf);
        pi++;
        pf++;
        pc++;
        printf("now the value of pi = %p\n",pi);
        printf("now the value of pc = %p\n",pc);
        printf("now the value of pf = %p\n",pf);
}




// 9.5 posrfix/prefix increment/decrement in a pointer variable of base type int


#include<stdio.h>
void main()
{
        int a=5;
        int *p;
        p=&a;
        printf("value of p = address of a = %p\n",p);
        printf("value of p = %p\n",++p);
        printf("value of p = %p\n",p++);
        printf("value of p = %p\n",p);
        printf("value of p = %p\n",--p);
        printf("value of p = %p\n",p--);
        printf("vaue of p = %p\n",p);
}

