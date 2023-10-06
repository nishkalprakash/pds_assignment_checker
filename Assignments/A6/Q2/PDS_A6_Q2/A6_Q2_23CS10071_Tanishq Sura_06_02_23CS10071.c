// name tanishq sura
// roll no 23CS10071

#include<stdio.h>
#include<stdlib.h>

int sum(int arr[],int size){
  if(size==0) return 0;
  return arr[size-1]+sum(arr,size-1);
}
int max(int arr[],int size){
  if(size==0) return 0;
  if(max(arr,size-1)<arr[size-1]) return arr[size-1];

  return max(arr,size-1);
}
void reverse(int arr[],int i1,int i2){
  int temp;
  if(i1==i2) return;
  if(i2-i1==1){
    temp=arr[i1];
    arr[i1]=arr[i2];
    arr[i2]=temp;
    return;
  }  
  temp=arr[i1];
  arr[i1]=arr[i2];
  arr[i2]=temp;
  reverse(arr,i1+1,i2-1);
  return;
}
  
int main(){
  int size,i1,i2;
  int arr[30];
  printf("the array :{");
  for(int i=0;i<30;i++){
    arr[i]=rand()%11+20;
    printf("%d ",arr[i]);
  }
  printf("}\n");
  printf("give size:");
  scanf("%d",&size);
  printf("the sum of the part of array: %d\n",sum(arr,size));
  printf("the max of the given part of the array: %d\ngive the start and end point indexes to be reversed",max(arr,size));
  scanf("%d%d",&i1,&i2);
  
  reverse(arr,i1,i2);
  printf("the reversed part:{ ");
  for(int i=i1;i<=i2;i++){
    printf("%d ",arr[i]);
  }
  printf("}");
  return 0;
  
}
