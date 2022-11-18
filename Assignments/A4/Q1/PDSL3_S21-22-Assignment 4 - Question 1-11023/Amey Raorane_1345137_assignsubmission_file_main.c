
#include <stdio.h>
#define max 1000 
void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r);
 

void printCombination(int arr[], int n, int r)
{
    
    int data[r];
 
   
    combinationUtil(arr, data, 0, n-1, 0, r);
}
 

void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r)
{
   
    if (index == r)
    {
        for (int j=0; j<r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
 
  

  
        for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}
 
// Driver program to test above functions
int main()
{
    int arr[max];
    int i ;
    int n,l ;
    printf("enter size of array you want to enter") ; 
    scanf("%d",&n) ; 
    for(l=0;l<n;l++)
    {
        scanf("%d",&arr[l]) ; 
    }
    printf("enter size of combination you want") ; 
    scanf("%d",&i) ; 
    printCombination(arr, n, i);
      for(int k=0;k<n;k++)
    {
        for(int j = 0 ; j<i;j++)
        {
            printf("%d ",arr[k]) ; 
        }
        printf("\n") ; 
    }
}