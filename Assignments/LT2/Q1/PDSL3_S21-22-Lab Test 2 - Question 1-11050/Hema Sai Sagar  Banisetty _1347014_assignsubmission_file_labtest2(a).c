/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
int MaxSubArraySum(int a[], int size)
{
     int MaxNow, MaxEndingHere = 0,
       start =0, end = 0, s=0;

    for (int i=0; i< size; i++ )
    {
        MaxEndingHere += a[i];

        if (MaxNow < MaxEndingHere)
        {
            MaxNow = MaxEndingHere;
            start = s;
            end = i;
        }
        if (MaxEndingHere < 0)
        {
            MaxEndingHere = 0;
            s = i + 1;
        }
    }
    printf("Maximum contiguous sum is %d\n", MaxNow);
    printf("Starting index is %d\n", start);
    printf("Ending index is %d\n", end);
}
/*Program to test MaxSubArraySum*/
int main()
{
    int a[] = {12, -5, 9, -2, 5};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = MaxSubArraySum(a, n);
    return 0;
}
