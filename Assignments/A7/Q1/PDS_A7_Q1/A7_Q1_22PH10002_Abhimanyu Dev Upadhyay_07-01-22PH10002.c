/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 1
* Description : Random array generator and perfect number checker
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function to check for perfect number
int perfect(int a)
{
    int i, factorsum = 0;
    for(i = 1; i <= a/2 ; i++)
    {
        if(a%i == 0)
        {
            factorsum += i;
        }
    }
    if(factorsum == a) return 1;
    else return 0;
}

//Function to chec for perfect number in array, replaces all other numbers with 0 and returns no of perfect numbers found
int arrperf(int *a, int n)
{
    int count=0;
    for(int i = 0; i< n; i++)
    {
        if(perfect(a[i])==0)
        {
            a[i] = 0;
        }
        else
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, i;
    time_t t;

    scanf("%d", &n);

    int *a;
    a = (int *)malloc(n*sizeof(int));

    srand(time(t));

    //Randomly generated array
    for(i = 0; i < n; i++)
    {
        a[i] = 2 + rand()%1000;
    }

    //Printing array
    printf("\n%d - random number array: ", n);
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    //Checking no of perfect numbers in the array
    int c = arrperf(a, n);

    //Appropriate outputs
    if(c==0)
    {
        printf("\nNo perfect numbers found");
    }
    else if(c==1)
    {
        for(i = 0; i<n; i++)
        {
           if(a[i]!=0) printf("\n%d is a perfect number", a[i]);
        }
    }
    else
    {
        printf("\n");
        for(i = 0; i<n; i++)
        {
           if(a[i]!=0) printf("%d ", a[i]);
        }
        printf("are perfect numbers");
    }

    free(a);
    return 0;
}
