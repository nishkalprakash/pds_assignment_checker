#include<stdio.h>
int linear_search(int a[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
        if(a[i]==k)
    return(i);
    return(-1);
}
int bin_search(int a[],int n,int k)
{
    int i,l,u,m;
    for(i=l;i<l;i++)
    {
        m=(l+u)/2;
        if(a[m]==k)
            return(k);
            if(a[m]<k)
                l=m+1;
            if(a[m]>k)
                u=m-1;
    }
    return (-1);

}
int issorted(int a[],int n)
{
    int i;
    for(i=0;i<n-1;i++)
        if(a[i+1]<a[i])
        return 0;
        return 1;

}
void main()
{
    int a[20],n,k,i,t;
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter the elements in sorted order");
    do
    {
    for(i=0;i<n;i++)
        scanf("%d",a[i]);
    }while(issorted(a[n],n)==0);
    printf("enter the elsement you want to search");
    scanf("%d",&k);
    printf("type 1 for linear searchand 2 for binary search");
    scanf("%d",&t);
    if(t==1)
    {
     if(linear_search(a[n],n,k)==-1)
            printf("not found");
     else printf("elsement %d was found at position %d",k,linear_search(a[n],n,k));

    }
    if(t==2)
    {
        if(bin_search(a[n],n,k)==-1)
        printf("not found");
        else printf("elsement %d was found at position %d",k,bin_search(a[n],n,k));
    }
}
