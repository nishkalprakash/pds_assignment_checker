/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department : Electrical Engineering
package     : code blocks
Assignment 3
Question : 4
*/
#include <stdio.h>

int lin_search(int a[],int x,int n)
{
    int i,k=-1;
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            k = i ;
            break ;
        }
        else k = -1;
    }
    return k;
}

int bin_search(int a[],int x,int n)
{
    int low,mid,high,k= -1,i;
    low  = 0 ;
    high = n-1 ;
    mid = (low+high)/2 ;

    for(i=0;i<n;i++){
    if( a[mid] == x)
    {
        k = mid ;
        return k ;
    }
    else if( a[mid]<x)
    {
        low = mid+1 ;
        mid = (low+high)/2 ;
        k = -1;
    }
    else if( a[mid]>x)
    {
        high = mid-1 ;
        mid = (low+high)/2 ;
        k = -1;
    }

}
}

int main()
{
  int i,n,j,k,A[20],x,type,p;
  printf(" Enter the no.of elements : ");
  scanf("%d",&n);
  printf(" Enter the array in sorted increasing order only ! ");
  for(i=0;i<n;i++)
  {
   scanf("%d",&A[i]);
  }

  printf("Enter the key element x, which you want to search:");
  scanf("%d",&x);
  printf("Choose the algorithm: Type 1 for linear search and 2 for binary search 2 : ");
  scanf("%d",&type);

  if(type == 1)
   {
    printf("Executing the linear search algorithm");
    p = lin_search(A,x,n);
    if(p!=-1)
    {
       printf(" Successful search !!");
       printf(" Element %d has been found at the index %d",x,n);
    }
    else if (p==-1) printf(" The element %d is not found ",x);
   }

    else if(type == 2)
    {
    printf("Executing the linear search algorithm");
    p = bin_search(A,x,n);
    if(p!=-1)
    {
       printf(" Successful search !!");
       printf(" Element %d has been found at the index %d",x,n);
    }
    else if (p==-1) printf(" The element %d is not found ",x);
    }
    return 0;

}


