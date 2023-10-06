//name: PILLI ASISH CHANDAN
// r.no. 23ME30039

#include<stdio.h>
#include<stdlib.h>

int arr[30];
int size=30;

int sum(int arr[],int size)
{
  if (size==0)
  {
    return 0;
  }
  else
  {
    int s;
    s=arr[size-1] + sum(arr,size-1);
    return s;
  }
}
int max(int arr[],int size){
  if(size=1){
    return arr[size-1];}
  int m=0;
    if(m<max(arr,size-1))
      m=arr[size-1];
      return m;}

int main(){
  int i;
  for(i=0;i<30;i++){
    arr[i]=rand()%11+20;
    printf("arr[%d]=%d ",i,arr[i]);
  }
  
  int s=sum(arr,size);
  printf("%d \n",s);
  int m=max(arr,size);
  printf("%d",m);
  
  
  
}
  
