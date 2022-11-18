#include<stdio.h>
#define max 1000
int Linear_search(int arr[], int n, int val)
{
int idx;
   for (idx = 0; idx< n; idx++)
    {
     if (arr[idx] == val)
    {
    return idx;
    }
    }
    return -1 ; 
}
int binary_search(int arr[],int l,int r ,int val)
{
    while (l<=r)
    {
        int mid =  (l + r)/2 ; 
        if(arr[mid]==val)
        {
            return mid ; 
        }
        else if(arr[mid]<val)
        {
            l = mid +l ;
        }
        else
        {
            r = mid-l ;
        }

    }

   return -1 ;  
}
int main()
{
    int n,array[max],i,x,count,m,j;   
    printf("enter the number of elements n:") ; 
    scanf("%d",&n) ; 
    printf("\nEnter the elements in sorted order: ") ; 
    count = 0 ; 
    
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]) ; 
    }
    
    for(i=0; i<n-1 ; i++) 
    { 
        if(array[i]>array[i+1])
        
        {
            printf("\nArray is not sorted in order,run again");
            break;
        }
    }
    
    
    printf("\nEnter the key element x, which you want to search:") ; 
    scanf("%d",&x)  ;
    m = 1 ;  
    printf("\nChoose the algorithm: Type 1 for linear search and 2 for binary search") ;
    scanf("%d",&m) ; 
    if(m==1) 
    {
       j =  Linear_search(array,n, x) ; 
       printf("\nElement %d has been found at the index %d",x,j) ; 
    }
    else if (m==2)
    {
        j = binary_search(array,0,n-1,x) ; 
        if(j == -1)
        {
            printf("\nElement not found in the array ");
        }
        else
        {
           printf("\nElement %d found at index : %d",x,j); 
        }
    }
    
    
    return 0 ;
}