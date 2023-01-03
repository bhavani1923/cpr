				      /* POINTER TO AN ARRAY (ARRAY POINTER) */

//To understand the difference between the pointer to an integer and pointer to an array of integers



#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *p;		/* can point to an integer */
	int (*ptr)[5];	/* can point to an array of 5 integers */
	int arr[5];	
	p = arr;		/* pointers to 0th element of arr*/
	ptr = &arr;	 /*  pointers to the whole array arr*/
	printf("p=%p,ptr=%p\n",p,ptr);
	p++ ;
	ptr++ ;
	printf("p=%p,ptr=%p\n",p,ptr);
}

