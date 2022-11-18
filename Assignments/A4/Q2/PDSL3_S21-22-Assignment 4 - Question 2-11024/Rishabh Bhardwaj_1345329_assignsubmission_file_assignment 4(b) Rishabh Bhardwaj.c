/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>
#include<stdlib.h>

// function prototype.
int myHostalChangingTrips(int k, int i, int n, int m);


int main(void)
{
    int k, n, m, i = 1; /* i is the starting day */

    // enter the number of days you need to do shifting.
    printf("Enter n = ");
    scanf("%d", &n);

    // enter the number of items you need to shift.
    printf("Enter k = ");
    scanf("%d", &k);

    //enter the maximum number of items per trip.
    printf("Enter m = ");
    scanf("%d", &m);

    //executing the function
    myHostalChangingTrips(k, i, n, m);


}
// function arguments.
int myHostalChangingTrips(int k, int i, int n, int m)
{
    int a[10000], b[10000], c[10000], d[10000];
    long int f;

    for(f = 0; f <10000; f++)
    {
       a[f] = (rand() % m);
       b[f] = (rand() % m);
       c[f] = (rand() % m);
       d[f] = (rand() % m);

       if (a[f] + b[f] + c[f] + d[f] == k && i <=140)
       {
           printf("Journey %d:", i);
           printf("(%d, %d, %d, %d)\n" , a[f], b[f], c[f], d[f]);
           i++;
       }
    }
}

