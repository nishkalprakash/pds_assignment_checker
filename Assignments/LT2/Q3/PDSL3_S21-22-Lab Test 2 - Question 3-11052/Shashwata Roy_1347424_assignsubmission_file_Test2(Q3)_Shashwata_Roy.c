/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 2
*/

#include<stdio.h>

//Works for only m==2

int rec(int n[], int l, int s1, int s2)
{
    int x,y;
    if(l==0)
    {
        x=s2-2*s1;
        if(x<0)
            x=-x;
        return x;
    }
    else
    {
        x=rec(n,l-1,s1+n[l-1],s2);
        y=rec(n,l-1,s1,s2);
        if(x>y)
            return rec(n,l-1,s1,s2);
        else
            return rec(n,l-1,s1+n[l-1],s2);
    }
}

int minTotalIqDiff(int m,int n[],int l)
{
    int s2=0,i;
    for (i=0; i<l; i++)
        s2+=n[i];
    if(m==2)
        return rec(n,l,0,s2); //pass to recursive function
}

int main()
{
    int i,m,l,ans;
    printf("Enter the array size: ");   //required for input
    scanf("%d",&l);
    int n[l];
    printf("Enter array n[]: ");
    for(i=0; i<l; i++)
    {
        scanf("%d",&n[i]);
    }
    printf("Enter m:");
    scanf("%d",&m);
    ans = minTotalIqDiff(m,n,l);
    return 0;
}
