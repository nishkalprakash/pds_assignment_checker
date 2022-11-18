/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 3(d)
*/
#include <stdio.h>
int binary_search(int a[], int n, int k)
{
  int l = 0, r = n;
  
  while (l <= r)
  {
    int m = l + (r-l)/2;
    if (a[m] == k)
        return m;  
        
    if (a[m] < k) 
        l = m + 1; 
    else 
         r = m - 1; 
  }
  return -1; 
}

int linear_search(int a[], int k) 
{ 
	 
	for (int i = 0; i < 20; i++) 
		if (a[i] == k)
        {
            printf("Succesfull Search\n"); 
			return i;
        } 
	return -1; 
}
int main()
{
    int n, A[40], k, min, al ;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements in sorted order : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    min=A[0];
    for (int j=1;j<n;j++)
    {
        if (A[j]<min)
        {
            printf("Not Sorted.Enter again");
        }
    }
    printf("Enter the key element x, which you want to search : ");
    scanf("%d",&k);
    printf("\nChoose the Algorithn: 1 for linear search and 2 for binary search\n");
    scanf("%d",&al);
    
    if(al == 1)
    {
        printf("Executing the linear search algorithm\n");
        printf("\nElement %d has been found at the index %d",k,linear_search(A,k));
    }
    else
    {
        printf("Executing the binary search algorithm\n");
        printf("\nElement %d has been found at the index %d",k,binary_search(A,n,k));
    }
    printf("\n");
    return 0;
}