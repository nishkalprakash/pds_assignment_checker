//Name:Lokesh Nitin Ingale
//Roll:23Hs10030
#include<stdio.h>
#include<stdlib.h>
int main (){
  int arr[50],n;
  printf("Enter the number of numbers to be entered");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    arr[i]=rand()%41+10;
  }
  for(int i=0;i<n;i++){
    printf("arr[%d]=%d\n",i,arr[i]);
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
    if( i!=j && j!=k && i<j && j<k && arr[i]+arr[j]+arr[k]==60)
      printf("The triplets with the sum 60 are of indices [%d],[%d],[%d]:%d %d %d\n",i,j,k,arr[i],arr[j],arr[k]);
      }
    }
  }
  
  
  
  return 0;
}
