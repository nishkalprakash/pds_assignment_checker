#include<stdio.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/



 int n;
int bin_search(int A[],int x)
{

    int t=0,r,l=n-1;
    while(t<=l)
    {
        r=t+(l-t)/2;
        if(A[r]==x) return r;
        if(A[r]<x) t=r+1;
        else l=r-1;
    }
    return -1;
}
int lin_search(int A[],int x)
{

    int i;
    for(i=0; i<n; i++)
    {
        if(A[i]==x) return i;
    }
    return -1;
}
int main()
{
    int A[20],x,i,j,temp,flag,take,found;
    printf("Enter number of elements:- ");
    scanf("%d",&n);


    do
    {
        flag=0;
        printf("\nEnter sorted array(ascending order):- \n");
        for(i=0; i<n; i++)
        {
            printf("Enter data[%d]: ",i+1);
            scanf("%d",&A[i]);
        }
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-1-i; j++)
            {
                if(A[j]>A[j+1]) flag=1;
            }
        }
        if(flag==1) printf("Not sorted. Enter again:- ");
    }
    while(flag);
    printf("Enter number to search: ");
    scanf("%d",&x);
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search:- ");
    scanf("%d",&take);
    if(take==1)
    {
        found=lin_search(A,x);
        if(found==-1) printf("Not found");
        else printf("\nSuccessful search\n\nElement %d has been found at the index %d\n\n",x,found);
    }
    else if(take==2)
    {
        found=bin_search(A,x);
        if(found==-1) printf("Not found");
        else printf("Successful search\nElement %d has been found at the index %d",x,found);
    }

    return 0;
}
