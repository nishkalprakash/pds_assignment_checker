#include <stdio.h>
#include <stdlib.h>

int size,arr[100];
void fill(){
  while(size==0 || size>100){
    printf("Enter the size of the array");
    scanf("%d",&size);
  }
  int i=0;
  for(i=0;i<size;i++){
    arr[i]= rand()%900+100;
  }
  for(i=0;i<size;i++){
    printf("A[%d]=%d\n",i,arr[i]);
  }
  return;
}

void exchange(){
  int mid=size/2,temp=0,i=0;
  if(size%2==0){
     for(i=0;i<mid;i++){
       temp=arr[i];
       arr[i]=arr[mid+i];
       arr[mid+i]=temp;
     }
  }
  else if(size%2!=0){
     for(i=0;i<mid;i++){
       temp=arr[i];
       arr[i]=arr[mid+1+i];
       arr[mid+1+i]=temp;
     }
  }
  for(i=0;i<size;i++){
    printf("A[%d]=%d\n",i,arr[i]);
  }
  return;
}

void rotate_right(){
  int i=0,temp=0;
  printf("Initial array\n");
  for(i=0;i<size;i++){
   printf("A[%d]=%d\n",i,arr[i]);
  }
  temp=arr[size-1];
  for(i=size-1;i>0;i--){
    arr[i]=arr[i-1];
  }
  arr[0]=temp;
  printf("Final array\n");
  for(i=0;i<size;i++){
    printf("A[%d]=%d\n",i,arr[i]);
  }
  return;
}
void rotate_left(){
  int i=0,temp=0;
  printf("Initial array\n");
  for(i=0;i<size;i++){
   printf("A[%d]=%d\n",i,arr[i]);
  }
  temp=arr[0];
  for(i=0;i<size;i++){
    arr[i]=arr[i+1];
  }
  arr[size-1]=temp;
  printf("Final array\n");
  for(i=0;i<size;i++){
    printf("A[%d]=%d\n",i,arr[i]);
  }
  return;
}
void segregate(){
  int i=0;
   printf("Initial array\n");
   for(i=0;i<size;i++){
     printf("A[%d]=%d\n",i,arr[i]);
  }
  return;
}
  
void search(){
  int i=0,n,count=0;
  printf("Original array");
  for(i=0;i<size;i++){
    printf("A[%d]=%d\n",i,arr[i]);
  }
  printf("Enter the integer to be searched\n");
  scanf("%d",&n);
  for(i=0;i<size;i++){
    if(arr[i]==n){
	printf("Found at %d\n",i);
	count++;
      }
  }
  if(count==0)printf("Not found\n");
  return;
}
void fold(){
  int mid,arr2[size/2],i=0;
  mid=size/2;
  
  for(i=0;i<size/2;i++){
      arr2[i]=arr[0]+arr[mid+i+1];
  }
   for(i=0;i<size/2;i++){
     printf("B[%d]=%d\n",i,arr2[i]);
  }
   return;
}
     
   

   
  


  
  
  
  

int main(){
  int c;
  
  printf("i.    1---- Fill\n");
  printf("ii.   2---- Exchange\n");
  printf("iii.  3---- Rotate right\n");
  printf("iv.   4---- Rotate left\n");
  printf("v.    5---- Segregate\n");
  printf("vi.   6---- Search\n");
  printf("vii.  7---- Fold\n");
  printf("viii. 8---- Analyze\n");
  printf("ix.   0,9 or any higher number ---- Exit\n");
  while(1){
    printf("Enter your choice:");
    scanf("%d",&c);
    if(c==1) fill();
    else if(c==2) exchange();
    else if(c==3)
      {
	rotate_right();
      }
    else if(c==4) rotate_left();
    else if(c==5) segregate();
    else if(c==6) search();
    else if(c==7) fold();
    // else if(c==8) analyze();
    else if(c==0 || c>=9){
      printf("Invalid choice\n");
      break;
    }
  }
  return 0;
}

  

  
