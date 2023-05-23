/*
* Section 2
* Roll number : 22EC10007
* Name : Akash Kumar
* Assignment : 7
* Question : 1
* Description : Storing random numbers in an array and checking if any number is a perfect square
*/


#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int perfect (int n)
{
    int i = 1;
    int sum = 0;

    while (i<n)
    {
        if ( (n % i) == 0)
        {
            sum += i;
        }
        i++;
    }

    if (sum == n) return 1;
    else return 0;
}

int main()
{
    // Take input for size of array
    int n;
    printf("Enter the number n\n");
    scanf("%d", &n);


    // Print a random array
    int *a;
    a = (int*) malloc(n * sizeof(int));

    srand(time (0));
    int p = 2;
    int q = 1000;

    int i = 0;

    for (i = 0; i < n; i++)
    {
        int r = p + rand()%q;
        a[i] = r;
    }


    printf("%d-random numbers array : ", n);

    i = 0;
    while (i<n)
    {
        printf("%d  ", a[i]);
        i++;
    }
    printf("\n");
    i=0;

    // Random array print completed



    int check = 0;
    int no = 0;  // This variable is to check if no perfect square is there
    while ( i < n)
    {
        check = perfect(a[i]);
        if ( check == 1)
        {
            printf("%d is a perfect number\n", a[i]);
            no = 1;
        }
        i++;
    }

    if (no == 0)
    {
        printf("No perfect square \n");
    }

    return 0;
}
