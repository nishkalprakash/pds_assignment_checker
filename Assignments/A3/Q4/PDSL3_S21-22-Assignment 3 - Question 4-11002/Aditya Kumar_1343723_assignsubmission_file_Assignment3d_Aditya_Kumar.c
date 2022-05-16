/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 3d
Package- stdio.h
*/
#include <stdio.h>

int linear_search(int arr[],int n, int k)
{   int index;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==k)
        {
          return i;
        }
    }
    return -1;
}

int bin_search(int arr[],int n, int k)
{
    int low = 0;
    int high = n-1;
    int mid = (n-1)/2;
    while (low <= high) {
if(arr[mid] < k)
{
low = mid + 1;
}
else if (arr[mid] == k) {
return mid;
}
else
{
high = mid - 1;
}
mid = (low + high)/2;
}
return -1;
}

int main()

{ int n;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            printf("The array is not sorted. Please enter again\n");
            return 0;
        }
    }
    int k;
    printf("Enter the key element x, which you want to search:\n");
    scanf("%d",&k);
    int c;
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search\n");
    scanf("%d",&c);
    int index;
    switch(c)
    {
        case 1: index = linear_search(a,n,k);
                break;
        case 2: index = bin_search(a,n,k);
                break;
        default: printf("Invalid number entered\n");
                 return 0;
    }
    if (index==-1)
    {
        printf("Unsuccessful search(-1)\n");
        return 0;
    }
    printf("Successful search\n");
    printf("Element %d has been found at the index %d",k,index);
    
    return 0;
}

