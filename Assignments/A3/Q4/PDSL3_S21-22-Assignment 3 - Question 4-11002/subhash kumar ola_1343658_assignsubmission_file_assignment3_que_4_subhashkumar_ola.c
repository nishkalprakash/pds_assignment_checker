#include<stdio.h>
int n;
int bin_search(int a[],int x)
{
    printf("\nExecuting the binary search algorithm\n");
    int t=0,p,e=n-1;
    while(t<=e)
    {
        p=t+(e-t)/2;
        if(a[p]==x) return p;
        if(a[p]<x) t=p+1;
        else e=p-1;
    }
    return -1;
}
int linear_search(int a[],int x)
{
    printf("\nExecuting the linear search algorithm\n");
    int i;
    for(i=0; i<n; i++)
    {
        if(a[i]==x) return i;
    }
    return -1;
}
int main()
{
    int a[20],x,i,j,temp,flag,ask,accept;
    printf("Enter number of elements in between [1-20] :- ");
    scanf("%d",&n);
    if(n>20||n<1)
    {
        printf("Not in given range!!");
        return 0;
    }
    do
    {
        flag=0;
        printf("\nEnter sorted array(ascending order):- \n");
        for(i=0; i<n; i++)
        {
            printf("Enter data[%d]: ",i+1);
            scanf("%d",&a[i]);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-1-i; j++)
            {
                if(a[j]>a[j+1]) flag=1;
            }
        }
        if(flag==1) printf("Not sorted. Enter again:- ");
    }
    while(flag);
    printf("Enter number to search:- ");
    scanf("%d",&x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search:- ");
    scanf("%d",&ask);
    if(ask==1)
    {
        accept=linear_search(a,x);
        if(accept==-1) printf("Not found");
        else printf("\nSuccessful search\n\nElement %d has been found at the index %d\n\n",x,accept);
    }
    else if(ask==2)
    {
        accept=bin_search(a,x);
        if(accept==-1) printf("Not found");
        else printf("Successful search\nElement %d has been found at the index %d",x,accept);
    }
    else printf("Wrong input chosen for algorithm!!");
    return 0;
}
