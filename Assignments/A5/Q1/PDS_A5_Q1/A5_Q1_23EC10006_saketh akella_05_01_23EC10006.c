#include<stdio.h>
#include<stdlib.h>

int main(){
  int a[50];
  int n;
  int x,y;
  int count=0;
  printf("enter the number of elements in the array \n");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    x=rand()%91;
    x+x+10;
    a[i]=x;
  }
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
 
  for(int i = 0;i<n;i=i+2){
    if(i+2>n){
      break;
    }
    if(a[i]>a[i+2]){
      y=a[i];
      a[i]=a[i+2];
      a[i+2]=y;
	count++;
    }
    
  }
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);}
  printf("\n");
  printf("no . interchanges made: %d \n",count);
  return 0;
}
