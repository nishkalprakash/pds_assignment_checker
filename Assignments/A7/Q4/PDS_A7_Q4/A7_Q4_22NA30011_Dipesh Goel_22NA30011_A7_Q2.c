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
    int n;
    printf("Enter no of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:");

    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);

    mergesort(a,0,n-1);

    int high_single_digit;

    for (int k=n-1;k>=0;k--)
    {
        if (a[k]/10==0)
        {
            high_single_digit=a[k];
        }
    }

    for (int k=n-1;k>=0;k--)
    {
        if ((high_single_digit*100+a[k])<(a[k]*10+high_single_digit))
        {
           printf("%d",a[k]);
        }
    }
    printf("%d",high_single_digit);
    for (int k=n-1;k>0;k--)
    {
        if ((high_single_digit*100+a[k])>(a[k]*10+high_single_digit))
        {
           printf("%d",a[k]);
        }
    }


    /*printf("\nSorted array is :");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
    */
    return 0;
}

