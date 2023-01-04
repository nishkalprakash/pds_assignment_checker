#include<stdio.h>

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
    int size1;
    printf("Enter size of Array A : "); scanf("%d",&size1);

    int A[size1];
    printf("Enter Array A : ");
    for (int i=0;i<size1;i++) scanf("%d",&A[i]);

    int B[size1];
    for (int j=0;j<size1;j++)
    {
        B[j]=A[j];
    }

    mergesort(B,0,size1-1);

    int count=0;
    for (int k=0;k<size1;k++)
    {
        if (B[k]!=A[k]) count++;
    }

    printf("Out of order : %d",count);

    return 0;


}

