				/*POINTERS AND ONE DIMENSIONAL ARRAYS*/

// 9.7 to print the value and address of the elements of an array

/*
#include<stdio.h>
int main(void)
{
	double arr[5] = {5,10,15,20,25};
	int i;
	for(i=0; i<5; i++)
	{
		printf("value of arr[%d]=%f\t",i,arr[i]);
		printf("address of arr[%d]=%p\n",i,&arr[i]);
	}
	return 0;
}




//9.8 to print the value and address of elements of an array using pointer notation


#include<stdio.h>
void main()
{
	int arr[5]={5,10,15,20,25};
	int i;
	for(i=0; i<5; i++)
	{
		printf("value of arr[%d] = %d\t",i,*(arr+i));
		printf("address of arr[%d] = %p\n",i,arr+i);
	}
}



//to print the value of array elements using pointer and subscripting notation


#include<stdio.h>
void main()
{
	int arr[]={5,10,15,20,15};
	int i;
	for(i=0; i<5; i++)
	{
		printf("value of arr[%d] =",i);
		printf("%d\t",arr[i]);
		printf("%d\t",*(arr+i));
		printf("%d\t",*(i+arr));
		printf("%d\t",i[arr]);
		printf("adress of arr[%d]=%p\n",i,&arr[i]);
	}
}

*/


// to print the value and address of array elements by subscripting a pointer variable


#include<stdio.h>
void main()
{
	int arr[]={5,10,15,20,25};
	int i;
	int *p;
	p=arr;
	for(i=0; i<5; i++)
	{
		printf("adress of arr[%d]=%p %p %p %p\n",i,&arr[i],arr+i,p+i,&p[i]);
		printf("value of [%d]= %d %d %d %d\n",i,arr[i],*(arr+i),*(p+i),p[i]);
	}
}
