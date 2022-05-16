/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>

int linear_search(int l, int k,int arr[])
{
    for(int i=0; i<l; i++)
    {
        if(arr[i] == k)// checking each element one by one
        return i;
    }
}
int binary_search(int l, int k, int arr[])
{
    int ll=0, hl = l-1; 
    // setting the lower limit and higher limit as array bounds initially
    int mid = (ll+hl)/2;
    while(ll<=hl)
    {
        if(arr[mid]< k)
        ll = mid+1;
        else if(arr[mid]>k)
        hl = mid-1;
        else{
            return mid;
            break;
        }
        mid = (ll+hl)/2;
    }

}

int main()
{
    int n, k;
    
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int flag=1;
    int arr[n];

    while(flag==1)
    {
        
    printf("Enter the elements in sorted order: ");
    for(int i=0; i<n; i++)
    scanf("%d", &arr[i]);
    flag=1;
    //checking if the array is sorted
    for(int i=0; i<n; i++)
    {
        if(arr[i+1]< arr[i])
        {
            flag++;
        }
    }
    if(flag>1)
    {
    printf("Not sorted. enter again\n");
    flag=1;
    }
    else break;
    }
    
    
    printf("Enter the element which you want to search: ");
    scanf("%d", &k);
    
    int s;
    printf("Choose the algorithm: Type 1 for linear search and 2 for binary search");
    scanf("%d", &s);
    if(s==1)
    {
        int i = linear_search(n, k, arr);
        printf("%d found at index %d", k, i);
    }
    else
     {
        int i = binary_search(n, k, arr);
        printf("%d found at index %d", k, i);
    }

}