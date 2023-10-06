#include <stdio.h>
#include <stdlib.h>
int arr[100],size;
void fill();
void exchange(int[],int );
void rotateright(int [],int);
void rotateleft(int[],int);
int main(){
  int n;
  do{
    printf("enter n\n");
    scanf("%d",&n);
    if(n==1) fill();
    if(n==2) exchange(arr,size);
    if(n==3) rotateright(arr,size);
    if(n==4) rotateleft(arr,size);
  }
  while(n>0 && n<9);
  return 0;
}
void fill (){
 
  do{
    printf("enter size of array\n");
    scanf("%d",&size);
  }
  while(size<1 || size>100);
  for(int i=0;i<size;i++){
    arr[i]= rand()%899 +100;
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void exchange(int arr[],int size){
  printf("\n");
  int temp;
  if(size%2==0){
    for (int i=0;i<size/2;i++){
      temp=arr[i];
      arr[i]=arr[size/2 +i];
      arr[size/2 +i]=temp;
    }
  }
  else {
    for(int i=0;i<size/2;i++){
      temp=arr[i];
      arr[i]=arr[size/2+i+1];
      arr[size/2 +i+1]=arr[i];
    }
  }
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void rotateright(int arr[],int size){
  int temp1=arr[size-1];
 
  for(int i=size-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=temp1;
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void rotateleft(int arr[], int size){
  int temp2=arr[0];
  for(int i=0;i<size-1;i++){
    arr[i]=arr[i+1];
  }
  arr[size-1]=temp2;
  for(int i=0;i<size;i++){
    printf("%d ",arr[i]);
  }
  printf("\n");
}
