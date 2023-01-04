#include <stdio.h>
#include <stdlib.h>

void mergesort(int a[],int i,int j)
{
    int mid;

    if(i<j) {
    mid=(i+j)/2;
   /* left recursion */
    mergesort(a,i,mid);
   /* right recursion */
    mergesort(a,mid+1,j);
 /* merging of two sorted sub-arrays */
    merge(a,i,mid,mid+1,j);
    }
}

void merge(int a[],int i1,int i2,int j1,int j2)
{
    int temp[50]; //array used for merging
    int i=i1,j=j1,k=0;

    while(i<=i2 && j<=j2) //while elements in both lists
    {
      if(a[i]<a[j])
         temp[k++]=a[i++];
      else
         temp[k++]=a[j++];
     }

    while(i<=i2) //copy remaining elements of the first list
       temp[k++]=a[i++];

    while(j<=j2) //copy remaining elements of the second list
       temp[k++]=a[j++];

    for(i=i1,j=0;i<=j2;i++,j++)
    a[i]=temp[j]; //Transfer elements from temp[] back to a[]
}


int main()
{
    int n;
    printf("Enter number of elements in array : "); scanf("%d",&n);

    int A[n];
    printf("Enter %d elements sorted array :",n);
    for (int i=0;i<n;i++) scanf("%d",&A[i]);

    int new_value;
    printf("Enter the new value to be inserted :"); scanf("%d",&new_value);

    printf("Input Array, A[%d] = ",n);
    for (int j=0;j<n;j++) printf("%d ",A[j]);

    printf("\nNew value to be inserted, m = %d\n",new_value);

    int m=n+1;
    int B[m];
    for (int k=0;k<(m-1);k++) B[k]=A[k];
    B[m-1]=new_value;

    mergesort(B,0,m-1);

    printf("\nOutput Array :");
    for(int l=0;l<m;l++)
      printf("%d ",B[l]);

    return 0;



}
