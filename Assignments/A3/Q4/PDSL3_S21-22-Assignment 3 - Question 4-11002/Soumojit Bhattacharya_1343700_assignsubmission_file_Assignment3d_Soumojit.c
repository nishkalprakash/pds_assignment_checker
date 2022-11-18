#include <stdio.h>
int binarysearch(int a[], int n, int k)
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

int linearsearch(int a[], int k) 
{ 
	 
	for (int i = 0; i < 20; i++) 
		if (a[i] == k) 
			return i; 
	return -1; 
}
int main()
{
    int n, a[40], k, min, ax ;
    printf("Please enter the number of elements: ");
    scanf("%d",&n);
    printf("Please enter the elements in sorted order : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    min=a[0];

    for (int j=1;j<n;j++)
    {
        if (a[j]<min)
        {
            printf("Not Sorted.Enter again");
        }
    }

    printf("Enter the key element x to be searched : ");
    scanf("%d",&k);
    printf("\nChoose the Algorithn:\n1 for linear search\n2 for binary search\n");
    scanf("%d",&ax);
    
    if(ax == 1)
    {
        printf("\nElement %d has been found at the index %d",k,linearsearch(a,k));
    }
    else
    {
        printf("\nElement %d has been found at the index %d",k,binarysearch(a,n,k));
    }

    printf("\n");
    return 0;
}