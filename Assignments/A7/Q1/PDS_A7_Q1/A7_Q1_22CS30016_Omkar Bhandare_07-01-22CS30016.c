/*
Section 2
Roll No. - 22CS30016
Name - Omkar Vijay Bhandare
Assignment No. - 07
Description - Dynamically allocated array and perfect number
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int isPerfectNo(int n)
{
    int sum = 0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0) sum = sum + i;
    }
    if(sum == n) return 1;
    else return 0;
}
int main()
{
    time_t t;
    srand(time(0));
    int n,flag=0,p=2,q=1000;
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    for(int i=0; i<n; i++)
    {
        *(a+i) = p + rand()%q;
    }
    printf("%d-random number array : ", n);
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\n");
    printf("Perfect number(s) : ");
    for(int i=0; i<n; i++)
    {
        if(isPerfectNo(*(a+i))==1)
        {
            flag++;
            printf("%d ", *(a+i));
        }
    }
    if(flag==0) printf("None");
}
