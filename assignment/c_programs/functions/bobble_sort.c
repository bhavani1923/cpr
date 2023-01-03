/***************************************************/ /*************************************

	write a c-program to perform bubble sort using functions

*************************************************/ /*****************************************


#include<stdio.h>

#define MAX_SIZE 5

void bubble_sort(int[]);

void main() 
{
    int arr_sort[MAX_SIZE], i;

    printf("Simple Bubble Sort Example - Array and Functions\n");
    printf("\nEnter %d Elements for Sorting\n", MAX_SIZE);
    for (i = 0; i < MAX_SIZE; i++)
        scanf("%d", &arr_sort[i]);

    printf("\nYour Data   :");
    for (i = 0; i < MAX_SIZE; i++) 
    {
        printf("\t%d", arr_sort[i]);
    }

    bubble_sort(arr_sort);
    getch();
}

void bubble_sort(int fn_arr[]) 
{
    int i, j, a, t;

    for (i = 1; i < MAX_SIZE; i++) 
    {
        for (j = 0; j < MAX_SIZE - 1; j++) 
	{
            if (fn_arr[j] > fn_arr[j + 1]) 
	    {

                t = fn_arr[j];
                fn_arr[j] = fn_arr[j + 1];
                fn_arr[j + 1] = t;
            }
        }

        printf("\nIteration %d : ", i);
        for (a = 0; a < MAX_SIZE; a++) 
	{
            printf("\t%d", fn_arr[a]);
        }
    }

    printf("\n\nSorted Data :");
    for (i = 0; i < MAX_SIZE; i++) 
    {
        printf("\t%d", fn_arr[i]);
    }
}


********************************************************/ /******************************************

	write a cprogram to perform bubble sort using functins

*************************************************/ /**************************************************



#include<stdio.h>
void bubble_sort(int[],int);
void main()
{
	int arr[100],size,i;
	printf("enter the size=");
	scanf("%d",&size);
	printf("enter the elements of array:\n");
	for(i=0; i<size; i++)
	{
		printf("enter the %d element:",i+1);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	printf("\n--------------------\n");
	bubble_sort(arr,size);

}

void bubble_sort(int arr[],int n)
{
	int i,j,temp;
	printf("sorted array is\n");
	for(i=1; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n----------------------------\n");
	for(i=0; i<n; i++)
	{
		printf("%d",arr[i]);
		printf("\n--------------------\n");

	}
}


******************************************/ /************************************************

        write a cprogram to perform bubble sort using functins
							    
******************************************/ /**************************************************/



#include<stdio.h>
void bubble_sort(int[],int);
void main()
{
        int arr[100],size,i;

        printf("enter the size of array\n");
        scanf("%d",&size);

        printf("enter values in an array\n");
        for(i=0; i<size; i++)
        {
                scanf("%d",&arr[i]);
        }

        printf("\nentered array values are \n");
        for(i=0; i<size; i++)
        {
                printf("%d\t",arr[i]);
        }

        bubble_sort(arr,size);

}

void bubble_sort(int arr[],int size)
{
        int i,j,temp;
        printf("\nsorted array is\n");
        for(i=0; i<size; i++)
        {
                for(j=i+1; j<size; j++)
                {
                        if(arr[i]>arr[j])
                        {
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }

        for(i=0; i<size; i++)
        {
                printf("%d\t",arr[i]);


        }
	printf("\n");
}
