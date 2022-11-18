/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int alpha(int a[], int n)
{
    int i,j,count,max,p=(-1);
     for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<=n-i-2;j++)/*checks the divisibility of all elements before
            n-i-1 and adds count then count is related to max . in the end the highest value is returned*/
        {
            if(a[j]%a[n-i-1]==0) count++;
        }
        max=count;
        if(max>p) p=max;
    }
    return(p);
}
int main()
{
    int n,a[100],max;
    int i,j,k;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
   max=alpha(a,n);
   printf("alpha value %d",max);
}
