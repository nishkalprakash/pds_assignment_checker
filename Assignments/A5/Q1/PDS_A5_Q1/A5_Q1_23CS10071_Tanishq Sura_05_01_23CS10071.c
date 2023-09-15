//tanishq sura
//23CS10071

#include<stdio.h>
#include<stdlib.h>

int main(){
  int arr[50];
  int n,i,j,x;
  printf("give the size of array:");
  scanf("%d",&n);
  if(n>50)
    printf("the maximum size had to be 50");
  else{
    printf("the array contains:\n[");
    for(i=0;i<n-1;i++){
      arr[i]=rand()%91+10;
      printf("%d,",arr[i]);
    }
    arr[n-1]=rand()%91+10;
    printf("%d",arr[n-1]);
    printf("]\n");
    for(j=0;j<=n/2-1;j++){
      if(arr[2*j]>arr[2*j+2]){
	x=arr[2*j];
	arr[2*j]=arr[2*j+2];
	arr[2*j+2]=x;}
    }
    printf("[");
    for(i=0;i<n-1;i++){
      printf("%d,",arr[i]);}
    printf("%d]",arr[n-1]);
  }
    return 0;
}
