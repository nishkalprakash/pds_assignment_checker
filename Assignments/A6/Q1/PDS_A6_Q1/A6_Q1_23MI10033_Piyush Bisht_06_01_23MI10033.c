//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>

int size;
int arr[100];

void fill();
void exchange();
void rotateright();
void rotateleft();
void segregate();
void search();
void fold();
void analyze();


int main(){
  while (1){
    int control;
    printf("\n\n1 -- Fill\n2 -- Exchange\n3 -- Rotate Right\n4 -- Rotate left\n5 -- Segregate\n6 -- Search\n7 -- Fold\n8 -- Analyze \n0, 9 or any higher number -- Exit");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&control);
    if (control==1)fill();
    else if (control==2)exchange();
    else if (control==3)rotateright();
    else if (control==4)rotateleft();
    else if (control==5)segregate();
    else if (control==6)search();
    else if (control==7)fold();
    else if (control==8)analyze();
    else if ((control==0)||(control>8)){
      printf("\n**Program Ended**");
      return 0;
    }
  }
  return 0;
}

void fill(){
  int s;
  printf("Enter the size of the array to be used : ");
  scanf("%d",&s);
  while ((s<1)||(s>100)){
    printf("\nEnter again : ");
    scanf("%d",&s);
  }
  size=s;
  printf("\n");
  for (int i=0;i<size;i++){
    arr[i]=rand()%900+100;
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  return;
}
void exchange(){
  printf("\nOriginal array :\n");
  for (int i=0;i<size;i++){
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  for (int i=0;i<size/2;i++){
    int temp=arr[i];
    arr[i]=arr[size-1-i];
    arr[size-1-i]=temp;
  }
  printf("\nResultant array :\n");
  for (int i=0;i<size;i++){
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  return;
}
void rotateleft(){
  int temp=arr[0];
  for (int i=0;i<size-1;i++){
    int temp1=arr[i+1];
    arr[i]=temp1;
  }
  arr[size-1]=temp;
  printf("\nResultant array :\n");
  for (int i=0;i<size;i++){
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  return;
}
void rotateright(){
  int temp=arr[size-1];
  for (int i=size-1;i>0;i--){
    int temp1=arr[i-1];
    arr[i]=temp1;
  }
  arr[0]=temp;
  printf("\nResultant array :\n");
  for (int i=0;i<size;i++){
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  return;
}
void segregate(){
  int count=0;
  for (int i=0;i<size-1;i++){
    if ((arr[i]%2!=0)&&(arr[i+1]%2==0)){
      for (int j=0;j<count;j++){
	int temp1=arr[i-j+1];
	arr[i-j+1]=arr[i-j];
	arr[i-j]=temp1;
	}
      count++;
     }
    if (arr[i+1]%2!=0){
      count++;
    }
    if ((i==0)&&(arr[i]%2!=0)){
      count++;
    }
  }
      
  printf("\nResultant array :\n");
  for (int i=0;i<size;i++){
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  return;
}
void search(){
  int ele;
  printf("\nArray :\n");
  for (int i=0;i<size;i++){
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  printf("\nEnter the element to be searched : ");
  scanf("%d",&ele);
  int count=0;
  for (int i=0;i<size;i++){
    if (arr[i]==ele){
      printf("\nFound at arr[%d]",i);
      count++;
    }
  }
  if (count==0)printf("\nNot found.");
  return;
}
void fold(){
  for (int i=0;i<size/2;i++){
    arr[i]=arr[i]+arr[size-1-i];
  }
  if (size%2==0){
    size=size%2;
  }
  else {
    size=size%2+1;
  }
  printf("\nResultant array :\n");
  for (int i=0;i<size;i++){
    printf("arr[%d]:%d\n",i,arr[i]);
  }
  return;
}
void analyze(){
  int pos=0,isize=1,mpos=0,msize=1;
  for (int i=0;i<size;i++){
    if (arr[i+1]>arr[i]){
      isize++;
    }
    else {
      pos=i-isize+1;
      printf("\nFound sequence : ");
      for (int j=0;j<isize;j++){
	printf("%d",arr[pos+j]);
      }
    }
    
    if (msize>isize){
      msize=isize;
      mpos=pos;
    }
  }
  printf("\nLargest sequence : ");
  for (int j=0;j<msize;j++){
    printf("%d",arr[mpos+j]);
  }
  return;
}


      
    
  
  
  
  
  
  
  
  

  

  

  
    
  
  
