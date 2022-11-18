/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Lab Test- 2b
Package- stdio.h
*/
#include <stdio.h>

int maxAlphaValue(int S[], int N) //declaring the function to find maximum alpha value in the sequence
{
    int max = 0; //taking maximum alpha value intially as zero
    for(int i = 1;i<N;i++)
    {
       int c = 0; //c stores the count of numbers divisible by S[i] and placed before it
       for(int j=0;j<i;j++)
       {
           if(S[j]%S[i]==0) //check for divisibility
           {
               c++; //count increases
           }
       }
       if (c>max) 
       {
           max=c; //max value changes if c is greater than the current value of max
       }
    }
    return max;
}

int main()
//taking input of array
{   int n;
    printf("How many numbers are in the array?\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array:\n");
    for(int i = 0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    //array input completed
    int maxAlpha = maxAlphaValue(a,n); //calls the function to find maximum alpha value
    printf("The maximum alpha value in this sequence is %d\n",maxAlpha);
    return 0;
}

