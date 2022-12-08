/*
section 14
rollno:22MI10013
name:animesh mishra
assignment no:5
discription : sum of series
*/

#include<stdio.h>
void main()
{
    float x,sum,no_row;
    int i,n;
    printf("input the value of x:");
    scanf("%f",&x);
    printf("input number of terms:");
    scanf("%d",&n);
    sum = 1; no_row = 1;
    for (i=1;i<n;i++)
    {
       no_row = no_row*x/(float)i;
       sum=sum+ no_row;
   }
     printf("\nthe sum is:%f\n",sum);
  }
