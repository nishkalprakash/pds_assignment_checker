// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 2

#include<stdio.h>

#include<time.h>

#include<math.h>

#include<stdlib.h>

int main()
{
    srand(time(NULL));
    int n,k;
    printf("\nEnter the value of n and k respectively");
    scanf("%d%d",&n,&k);
    float sum=0;
    int d=0;

    for (int i = 0; i < k; i++)
    {
       d=0;
       for (int j = 0; j < n; j++)
       {
           int  p= rand() &1 ? -1 : 1;
           d+=p;
       }
       
       sum=sum+d*d;
        
    }

    float avg=sqrt(sum/k);

    printf("Output:%f",avg);
    
    return 0;
}