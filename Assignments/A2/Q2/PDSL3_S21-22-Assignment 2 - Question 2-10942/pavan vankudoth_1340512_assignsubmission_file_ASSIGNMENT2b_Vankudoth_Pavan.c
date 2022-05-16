/*
Name : Vankudoth Pavan
Department : Chemical Engineering
Roll no : 21CH10075
Package : Code blocks
Operating system : Windows
*/
#include<stdio.h>
int main()

{
    int count,p,k,N,m;
    int sum=0;
    int n=0;
    printf("enter N=");
    scanf("%d",&N);
    for(k=1;k<=N;k++)

    {
        if (k%3==02){sum=sum+1;}
        else {sum=sum-1;}
        count=count+sum;
        p=count*count;
        n=n+p;}

        m=pow(n/k,0.5);
        printf("%d",m);
        return(0);

    }


