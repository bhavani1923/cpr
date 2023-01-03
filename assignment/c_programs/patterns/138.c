/************************************************//**********************************************


        7.1 sqaure number patterns

        12345
        23455
        34555
        45555
        55555

        138.number pattern 15


***********************************************//***********************************************/






#include <stdio.h>

int main()
{
    int i, j,n;

   
    printf("Enter number of rows and colomns: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("%d", j);
        }

        for(j=i; j>1; j--)
        {
            printf("%d", n);
        }

        printf("\n");
    }
}

