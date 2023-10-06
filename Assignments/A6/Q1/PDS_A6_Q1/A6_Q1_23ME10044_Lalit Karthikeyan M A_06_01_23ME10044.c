//ROLL NO.: 23ME10044
//Name: LALIT KARTHIKEYAN.M.A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a[100];
int size;

void fill(){
  int x;
  printf("Enter the size of the array range:[1,100]\n");
  scanf("%d",&size);
  if(size>100||size<1){
    printf("Entered size out of range!!\n");
    fill();
  }
  else{
    for(int i=0;i<size;i++){
      x=(rand()%900)+100;
      a[i]=x;
    }
    printf("The content of the array are:\n");
    for(int i=0;i<size;i++){
      printf("a[%d]=%d\n",i,a[i]);
    }
  }
  
}
void segregate(){
  
}
void exchange(){
  int mid;
  int temp;
  mid=size/2;
  if(size==0){
    printf("The array is empty!!");
    return;
  }
  printf("The content of array originally:\n");
  for(int i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
  if(size%2==1){
  for(int i=0;i<mid;i++){
    temp=a[mid+i+1];
    a[mid+i+1]=a[i];
    a[i]=temp;
  }}
  if(size%2==0){
    for(int i=0;i<mid;i++){
      temp=a[mid+i];
      a[mid+i]=a[i];
      a[i]=temp;
    }
  }
 
  if(!size%2){
    temp=a[mid];
    a[mid]=a[size-1];
    a[size-1]=temp;
  }
  
  printf("\nThe content of array after exchanging each halves:\n");
  for(int i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
}

void rotateright(){
  int curr,next=a[0];
  if(size==0){
    printf("The array is empty!!");
    return;
  }
  printf("The content of original array:\n");
  for(int i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
  for(int i=0;i<size-1;i++){
    curr=next;
    next=a[i+1];
    a[i+1]=curr;
  }
  a[0]=next;

  printf("\nThe content of right rotated array:\n");
  for(int i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
 }

void rotateleft(){
  int prev=a[0],curr;
  if(size==0){
    printf("The array is empty!!");
    return;
  }
  printf("\nThe content of original array:\n");
  for(int i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
  for(int i=size-1;i>0;i--){
    curr=prev;
    prev=a[i];
    a[i]=curr;
  }
  a[0]=prev;
  printf("The content of left rotated array\n");
  for(int i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
}

void search(){
  int n,flag=0,j=0;
  printf("The content of the array is:\n");
  for(int i=0;i<size;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
  printf("Enter the element to be searched:\n");
  scanf("%d",&n);
  for(j;j<size;j++){
    if(a[j]==n){
      flag=1;
      break;
    }
  }
  if(flag==0)printf("Not found!!\n");
  else printf("Element is found at index:%d\n",j);
}

int main(){
  srand(time(NULL));
  int n;
  while(1){
  printf("\nEnter the choice: \n1---Fill\n2---Exchange\n3---Rotate right\n4---Rotate left\n6---Search\n\n");
  scanf("%d",&n);
  if(n==0 || n>=9||n==5||n==7||n==8)break;
  if (n==1)fill();
  if(n==2)exchange();
  if(n==3)rotateright();
  if(n==4)rotateleft();
  /*if(n==5)segregate();*/
  if(n==6)search();
  /*if(n==7)fold();
  if(n==8)analyze();*/
  }
  return 0;
}
