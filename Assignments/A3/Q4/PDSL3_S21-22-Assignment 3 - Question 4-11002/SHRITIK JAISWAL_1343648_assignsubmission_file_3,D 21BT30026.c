//shritik jaiswal
//21BT30026 SEC-3
//MAC OS
#include <stdio.h>
int issorted(int a[],int n)//checking if the array is sorted or not
{
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        return 1;// if the array is not in ascending order
    }
    return 0;
}
int linear(int a[],int n, int x)// executing linear search algorithm
{
    printf("Executing Linear search algorithm\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        return i+1;
    }
    return -1;
}
int binary(int a[],int n,int x)//executing binary search algorithm
{
    printf("Executing Binary search algorithm\n");
    int f=0,l=n-1;
    while(f<=l)
    {
        int m=(f+l)/2 ;
        if(a[m]=x)
        return m+1;
        else if(a[m]>x)
        {
            l=m-1;
        }
        else
        {
            f=m+1;
        }
    }
    return -1;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);//input of no. of elements
    int a[n];
    printf("Enter the elements in sorted order: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//input of array
    }
    if(issorted(a,n)==1)// if array is not sorted then again taking the input
    {
        printf("Not sorted. Enter again");
        printf("Enter the elements in sorted order: \n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }        
    }
    int x;
    printf("Enter the key element x, which you want to search: \n");
    scanf("%d",&x);//element to search for
    int c;
    printf("Choose the algorithm. Type 1 for linear search and 2 for binary search :\n");
    scanf("%d",&c);//choice of user
    if(c==1)//choice of linear search
    {
        int pos = linear(a,n,x);
        printf("Successfully executed\n");
        if(pos==-1)
        printf("Not found");
        else
        printf("the element is found at position %d",pos);
        //position where the element is found
    }
    else
    {
        int pos = binary(a,n,x); 
        printf("Successfully executed\n");
        if(pos==-1)
        printf("Not found");
        else
        printf("the element is found at position %d",pos);
        //Position where the element is found.
    }
    return 0;
}