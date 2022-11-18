/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>, <stdlib.h>, <math.h>
Assignment Class: 6
*/

//The below code works only for m=2, that is for two teams;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int minimum(int a,int b);
int findMinRec(int arr[], int i, int sumCalculated, int sumTotal);
int main()
{
    int n,m;
    int arr[1000000];
    int sumTotal = 0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter array of IQ of n students: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of Teams to be formed:");
    scanf("%d",&m);
    for (int i = 0; i < n; i++)
    {
        sumTotal += arr[i];
    }
    int diff=findMinRec(arr, n, 0, sumTotal);
    printf("Minimum Difference between Total IQ of Teams:%d",diff);
    return 0;
}


int findMinRec(int arr[], int i, int sumCalculated, int sumTotal)
{
    if (i == 0)
    {
        int value;
        value=abs((sumTotal-sumCalculated)-sumCalculated);
        return value;
    }

    int n=minimum(findMinRec(arr, i - 1, sumCalculated + arr[i - 1], sumTotal), findMinRec(arr, i - 1, sumCalculated, sumTotal));
    return n;
}
int minimum(int a, int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}