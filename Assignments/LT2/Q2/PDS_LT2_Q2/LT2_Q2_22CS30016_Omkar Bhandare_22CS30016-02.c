/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Problem No. - 01
Description -
*/

#include<stdio.h>
#include<stdlib.h>

int max(int *a, int n, int i)
{
    if(i<n)
    {
        if(*(a+i)>*(a))
        {
            return *(a+i);
            return max(a,n,i+1);
        }
        else
        {
            return *(a);
            return max(a,n,i+1);
        }
    }
}

void generate(int *arr, int n, int p, int q)
{
    for(int i=0; i<n; i++)
    {
        *(arr+i) = rand()%(q-p+1)+p;
    }
    printf("List = [ ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("]");
}

int main()
{
    int n,p,q;
    scanf("%d", &n);
    scanf("%d%d", &p,&q);
    if(p>q)
    {
        printf("p should be less than or equal to q");
        exit(1);
    }
    if(n==0)
    {
        printf("Invalid value of n");
        exit(1);
    }
    int *arr;
    arr = malloc(n*sizeof(int));
    generate(arr,n,p,q);
    printf("\n");
    printf("Max = %d", max(arr, n,0));
    return 0;
}
