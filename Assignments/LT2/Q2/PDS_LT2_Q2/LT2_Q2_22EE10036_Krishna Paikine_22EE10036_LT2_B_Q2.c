/*
Name - Krishna Paikine
Roll no - 22EE10036
Section - 2
Set - B
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int max(int *a, int n)
{

}

int main()
{
    int n, p, q, i;
    printf("Enter the number of random numbers to be generated\n");
    scanf("%d", &n);
    printf("Enter the range in which the numbers are to be generated\n");
    scanf("%d %d", &p, &q);
    printf("\n");
    int a[n];
    srand(time(0));
    for(i = 0; i < n; i++)
    {
        a[i] = p + rand() % q;
    }
    printf("List = [");

    for(i=0; i<n; i++)
    {
            printf("%d ", a[i]);
    }
    printf("]");




    return 0;
}
