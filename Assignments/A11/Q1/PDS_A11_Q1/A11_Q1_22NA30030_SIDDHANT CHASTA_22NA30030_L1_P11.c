/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 11
Description :A program to print the sum of harmonic series upto n
*/

#include<stdio.h>

float calcSum(int n);

int main()
{
    int N;
    printf("Enter the number N : ");
    scanf("%d",&N);
    printf("SUM is : ");
    calcSum(N);

}


float calcSum(int n)
{
     float sum=0,sumnext;
     for(int i=1;i<=n;i++)
     {
        sumnext = (1.0)/i;
        sum = sum+sumnext;
     }
     printf("%f\n",sum);

}
         
         
     
































