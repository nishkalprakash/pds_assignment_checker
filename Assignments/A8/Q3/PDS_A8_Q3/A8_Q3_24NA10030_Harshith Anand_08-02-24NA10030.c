#include<stdio.h>
int main()
  {
     int i,j,n,temp,m;
     printf("n = ");
     scanf("%d",&n);
     int A[n];
     printf("A[n] = ");
     for(i=0;i<=n;i++){
     scanf("%d",&A[i]);}
     
     
     
     
     
     
    
     for(i=n ;i>0 ;i--){
     for(j=0 ;j<i-1 ;j++){
     if(A[j] > A[j+1]){
     
     temp = A[j];
     A[j]=A[j+1];
     A[j+1]=temp;
     }
     }
     }
     printf("output array : ");
     
     for(i=0 ;i<n ;i++)
     printf(" %d ", A[i]);
     
     }
