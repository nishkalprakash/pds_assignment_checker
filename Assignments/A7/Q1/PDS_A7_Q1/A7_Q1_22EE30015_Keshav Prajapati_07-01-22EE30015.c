/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 7
Description :
*/

#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int perfect_no(int num);

int main()
{
    int n;
    int *a;

    printf("Enter the length of array you want to create : ");
    scanf("%d", &n);

    // To assign size of array in memory
    a = (int*) malloc(n * sizeof(int));

    // Generating random numbers and giving input to array
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        int r = 0;
        r = 1 + rand()%1000;
        *(a+i) = r;
    }

    printf("\n%d random number array : \n", n);

    //To print array
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }

    // To move to a new line
    printf("\n");

    //Logic for checking perfect number

    int count = 0;

    // Finding factors
    for(int j = 0; j < n; j++)
    {
        int factor_sum;
        factor_sum = 0;

        for(int i = 1; i < *(a+j); i++)
        {
            if(*(a+j)%i==0)
            {
                factor_sum++;
            }
        }

        if(factor_sum == *(a+j))
        {
            printf("%d ", *(a+j));
            count++;
        }
    }

    if(count == 0)
    {
        printf("No perfect number found");
    }

    else if(count = 1)
    {
        printf("is perfect number");
    }

    else
    {
        printf("are perfect numbers");
    }

    printf("\n");

    return 0;
}
