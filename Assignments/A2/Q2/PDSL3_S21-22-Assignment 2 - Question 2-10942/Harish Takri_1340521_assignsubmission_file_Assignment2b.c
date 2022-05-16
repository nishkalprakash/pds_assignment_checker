/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    srand(time(NULL));
    int i,j,p,n,k;
    float total_d;
    int temp_d;
    printf("Enter number of steps(n) : ");
    scanf("%d",&n);
    printf("Enter number of iterations(k) : ");
    scanf("%d",&k);
    i=1;
    total_d=0;
    while(i<=k){
        temp_d=0;
        for(j=0;j<n;j++){
            p=rand() & 1 ? -1 : 1;
            temp_d+=p;
        }
        total_d+=(temp_d*temp_d);
        i++;
    }
    total_d=sqrt(total_d/k);
    printf("%f\n",total_d);
    return 0;
}
