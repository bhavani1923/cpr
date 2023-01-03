#include<stdio.h>
// char 1 byte
// short int 2 byte
// int 4 byte
// double 8 byte
/*
// structure A

typedef struct struct_tag
{
	char c;
	short int s;
} structa_t;

// structure B

typedef struct structb_tag
{
	short int s;
	char c;
	int i;
} structb_t;

// structure c

typedef struct structc_tag
{
	char c;
	double d;
	int s;
} structc_t;

// structure D

typedef struct structd_tag
{
	double d;
	int s;
	char c;
} structd_t;

int main()
{
	printf("sizeof(structa_t)=%lu\n",sizeof(structa_t));
	printf("sizeof(structb_t)=%lu\n",sizeof(structb_t));
	printf("sizeof(structc_t)=%lu\n",sizeof(structc_t));
	printf("sizeof(structd_t)=%lu\n",sizeof(structd_t));
}


#include<stdio.h>
void argument_alignment_check(char c1, char c2 )
{
	//considering the upword sack
	//on upword stack the output will be negative
	printf("disalignment %d\n",(int)&c2 - (int)&c1);
}

*/

#pragma pack(2)
struct s
{
	int i;
	char ch;
	double d;
};

int main()
{
	struct s A;
	printf("sizeof A is =%ld",sizeof(A));
}
