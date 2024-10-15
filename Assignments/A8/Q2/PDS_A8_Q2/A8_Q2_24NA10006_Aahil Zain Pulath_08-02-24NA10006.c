#include<stdio.h>
#define N 101
void sort(int x[],int size){
 int t;
 for (int i=0; i<size; i++)
    for (int j=0; j<size-i-1; j++)
       if (x[j] > x[j+1]) {
        // swap a[j] and a[j+1]
          t = x[j];
          x[j] = x[j+1];
         x[j+1] = t;
       }
 printf("[");
 for(int i=0;i<size;i++)
 {
 printf("%d\t",x[i]);
 }
 printf("]");
}
int main()
{
printf("ENTER N");
int m;
int arr[101],n;
scanf("%d",&n);
if (n<=N){
 for (int i=0 ; i<n ; i++)
 {
  scanf("%d",&arr[i]);
  }
  }
printf("Sorted array\n");
sort(arr,n);
printf("\n");
printf("ENTER m");
scanf("%d",&m);
arr[n+1]=m;
printf("modified array");
sort(arr,(n+1));
}

