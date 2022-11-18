/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 2
*/

//The Q states s[i] divisible by s[k] first (k<i) but then in the next paragraph (k>i) is considered.
//Although the validity of examples is not guaranteed, all 2 examples use k>i.
//The ultimate conclusion was using k>i as the Q and examples both indicate the same and the problem has been solved using that.
//The sole validity of examples has not been considered as instructed

#include<stdio.h>

int maxAlphaValue(int s[],int n)      //Array size needed to be passed too
{
    int i,j,m,x=0,temp;
    for(i=0; i<n; i++)
    {
        m=0;
        for(j=i; j<n; j++)
        {
            if(s[i]%s[j]==0)
                m++;
        }
        if(m>x)
            x=m;
    }
    return x;
}

int main()
{
    int i,n=100000;
    printf("Enter n: ");   //Array size required
    scanf("%d",&n);
    int s[n];
    printf("Enter array s[]: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&s[i]);
    }
    i=maxAlphaValue(s,n);
    printf("Output: %d",i);
    return 0;
}
