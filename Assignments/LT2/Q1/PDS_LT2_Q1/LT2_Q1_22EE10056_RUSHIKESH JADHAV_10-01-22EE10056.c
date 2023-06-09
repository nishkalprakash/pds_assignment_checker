#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Name:-Rushikesh santosh jadhav
Roll no:-22EE10056
*/
float mean(int *a,int n)
{
    static float m1=0,m2=0,i=0;
    int t;
    t=(n+1)/2;
    if(n<=0)
    return (m1+m2)/((float)(2*(t+i)));
    else if(n==1)
    {
        m1+=(float)*a;
        return ((m1+m2)/(float)(2*(t+i)-1));
    }
    m1+=(float)*a;
    m2+=(float)*(a+n-1);
    i++;
    mean(a+1,n-2);
}
int main()
{
    int n;
    float m;
    printf("Enter no of integers to be entered:");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("List = [");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n");
    m=mean(a,n);
    printf("Mean:%f",m);
    return 0;
}
