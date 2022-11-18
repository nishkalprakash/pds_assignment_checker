/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-code blocks
*/
#include <stdio.h>
#include <math.h>
int linear_search(int x,int a[])
{
    int n=sizeof(a);
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        return i;
    }
    return -1;
}
int bin_search(int x, int a[])
{
    int n=sizeof(a);
    int mid,lb=0,ub=n-1;
    while(lb<ub)
    {
        mid=(lb+ub)/2;
        if(a[mid]==x)
        return mid;
        if(a[mid]<x)
        lb=mid+1;
        if(a[mid]>x)
        ub=mid-1;
    }
    return -1;
}
int main()
{
    int n,x;
    printf("Enter the number of elements n: ");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("enter x");
    scanf("%d",&x)
    linear_search(x,ar);
}