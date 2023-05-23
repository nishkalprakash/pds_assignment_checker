/*
Roll No : 22CS10077
Name : Surla Navaneeth
Assignment No : 7
Problem No : 1
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int *a = (int*) malloc(n * sizeof(int));
    srand(time(0));
    for(i=0;i<n;i++)
    {
        a[i] = 2 + rand()%1000;
    }
    printf("%d-random number array : ",n);
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}
