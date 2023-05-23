/*
22ME10034
Hindvee Rajesh Vispute
Section 2
Lab-07
Assignment 1
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int *a;
    int n, r, i, k, j;
    int sum = 0;
    int p =2;
    int q = 1000;

    printf("Enter limit: ");
    scanf("%d", &n);

    a = (int *)malloc(n*sizeof(int));

    srand(time(0));

    for(i = 0; i<n; i++)
    {
        r = p+ rand()%q;
        a[i] = r;
    }

    printf("\n%d-random number array: ", n);

    for(i = 0; i<n; i++)
    {
        printf("%d ", a[i]);
    }

    k = 0;
    int *b;
    b = (int *)malloc(n*sizeof(int));

    for(i= 0; i<n; i++)
    {
        for(j=1; j<a[i]; j++)
        {
            if(a[i]%j == 0)
            {
                sum = sum + j;
            }
            if(sum == a[i])
            {
                b[k]= a[i];
                k++;
            }

        }


    }

    if(k==0)
    {
        printf("\nNo perfect number found");
    }
    else if(k==1)
    {
        printf("\n%d is a perfect number", b[0]);
    }
    else
    {
        printf("\n");
        for(i = 0; i<k; i++)
        {
            printf("%d, ", b[i]);
        }
        printf("are perfect numbers");
    }

    return 0;


}
