/****************************************/ /**********************************

	88. Write a C program to print all Strong numbers between 1 to n.

****************************************/ /**********************************/
/*

#include <stdio.h>

int main()
{
    int i, j, k, lastDigit, end, fact, sum;


    printf("Enter upper limit: ");
    scanf("%d", &end);

    printf("All Strong numbers between 1 to %d are:\n", end);
    

    for(i=1; i<=end; i++)
    {

        k = i;

        sum = 0;


        while(k > 0)
        {
            fact = 1;
            lastDigit = k % 10;


            for( j=1; j<=lastDigit; j++)
            {
                fact = fact * j;
            }

            sum += fact; 

            k /= 10;
        }
        

        if(sum == i)
        {
            printf("%d\n", i);
        }
    }


}
*/

#include <stdio.h>

void main() 
{

    int n, i, sum, temp, rem, k, j;

    printf("Enter limit\n");
    scanf(" %i", &n);

    for(i = 1; i <= n; i++) 
    {
        sum = 0;
        temp = i;

            while(temp != 0) 
	    {
                rem = temp % 10;
                k = 1;

                    for(j = 1; j <= rem; j++) 
		    {
                        k *= j;
                    }

                sum += k;
                temp /= 10;

            }

        if(sum == i)
            printf("%i\n", i);
    }
}
