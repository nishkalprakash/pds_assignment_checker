/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
exam: 2
Operating System: windows
*/
/*to find the maximum value of alpha*/
#include<stdio.h>
int maxalphavalue(int A[],int n) //function to find the maximum value of alpha of each entries.
{
    int a=0,temp=0,i,j;
    for(i=1;i<n;++i)
    {
        for(j=0;j<i;++j)
        {
            if((A[j]%A[i])==0) a=a+1;
        }
        if(temp<a) temp=a;
        a=0;
    }
    return(temp);
}
int main()
{
    int A[100],n,i,x;
    printf("enter the no of entries:");
    scanf("%d",&n);  // n is included so that desired no of values can be entered.
    printf("enter the value of entries:\n");
    for(i=0;i<n;++i)
    {
        scanf("%d",&A[i]);  // values are entered.
    }
    x= maxalphavalue(A,n);
    printf("the maximum alpha value of the given entries= %d",x);
    return 0;
}
