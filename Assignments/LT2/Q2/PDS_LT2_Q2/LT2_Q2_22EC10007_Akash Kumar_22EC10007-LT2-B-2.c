/*
* Name : Akash KUmar
* Roll : 22EC10007
* Problem 1: Finding Max using the Recursive function
*/

#include <stdio.h>
#include <time.h>

int large (int a, int b)
{
    if (a >= b)
        return a;
    if (a < b)
        return b;
}

int max(int n, int a[n])
{
    int m = 0;
    int largest = 0;
    while (m<n)
    {
        largest = large(a[m], largest);
        m++;
    }
    return largest;
}

int main()
{
    int n, p, q;

    printf("Enter the numbers\n");
    printf("n = ");
    scanf("%d", &n);
    printf("p = ");
    scanf("%d", &p);
    printf("q = ");
    scanf("%d", &q);

    while ( n <= 0 | p>q)
    {
        if (n <= 0)
        {
            printf("Invalid value of n\n");
        }

        if ( p > q)
        {
            printf("p should be less than or equal to q \n");
        }

        printf("Enter again\n");

        printf("Enter the numbers\n");
        printf("n = ");
        scanf("%d", &n);
        printf("p = ");
        scanf("%d", &p);
        printf("q = ");
        scanf("%d", &q);
    }

    if (p<q)
    {

        int d = q-p;

        int list[n];
        printf("List = [");

        int j = 0;
        while (j<n)
        {
            list[j] = p + rand()%d;
            printf("%d ", list[j]);
        j++;
        }
        printf(" ] \n");

        int highest = max(n, list);
        printf("max = %d\n", highest);

    }


    if (p == q)
    {
        int k = 0;

        printf("List = [ ");
        while (k<n)
        {
            printf("%d ", p);
            k++;
        }
        printf("]\n");

        printf("Max = %d\n", p);

    }

    return 0;
}
