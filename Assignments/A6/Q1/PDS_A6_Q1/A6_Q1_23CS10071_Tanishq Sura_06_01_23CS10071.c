// name tanishq sura
// roll no 23CS10071

#include<stdio.h>
#include<stdlib.h>

int arr[100];
int size=100,filled=0;

int fill();
int exchange();
int rotateright();
int rotateleft();
//int segregate();

int search(int size,int n);
int fold(int i1,int i2);
//int analyse();
      
int main(){
  int k,n;
  //part a
  while(1){
    printf("the menu choices:\n1--fill\n2--exchange\n3--rotate right\n4--rotate left\n5--segregate\n6--search\n7--fold\n8--analyse\n0,9 or any higher number--Exit\n");
    scanf("%d",&k);
    if(k==1) fill();
    if(k==2) exchange();
    if(k==3) rotateright();
    if(k==4) rotateleft();
    if(k==5) //segregate();

    if(k==6){ printf("give element to search");
    scanf("%d",&n);
    search(size,n);}
    if(k==7) fold(0,size-1);
    if(k==8) //analyse();
    if((k==0)||(k>=9)) break;
  }
  return 0;
}

int fill(){
  filled=1;
  do {
    printf("tell the size ");
    scanf("%d",&size);
  }
  while((size>100)||(size<1));
  printf("the array:{");
  for(int i=0;i<size;i++){
    arr[i]=rand()%900+100;
    printf("%d  ",arr[i]);
  }
  printf("}\n");
  return 0;
}

int exchange(){
  if(filled==0){printf("array not filled\n");return 0;}
  int temp;
  printf("the original array:{");
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }
  printf("}\n");
  for(int j=0;j<size/2;j++){
    temp=arr[j];
    arr[j]=arr[(size+1)/2+j];
    arr[(size+1)/2+j]=temp;
  }
  printf("the new array:{");
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }
  printf("}\n");
  return 0;
}

int rotateright(){
  printf("the original array:{");
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }
  printf("}\n");
  int temp1=arr[0],temp2;
  for(int i=0;i<size;i++){
    temp2=arr[i];
    arr[i]=temp1;
    temp1=temp2;    
  }
  arr[0]=temp1;
  
  printf("the original array:{");
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }
  printf("}\n");
  return 0;
}

int rotateleft(){
  printf("the original array:{");
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }
  printf("}\n");
  int temp1=arr[size-1],temp2;
  for(int i=size-1;i>=0;i--){
    temp2=arr[i];
    arr[i]=temp1;
    temp1=temp2;    
  }
  arr[size-1]=temp1;
  
  printf("the original array:{");
  for(int i=0;i<size;i++){
    printf("%d  ",arr[i]);
  }
  printf("}\n");
  return 0;
}
  

  
int search(int size,int n){
  if(size==0){
    printf("not found");
    return 0;
  }
  if(arr[size-1]==n){
    printf("the index is: %d",size-1);
    return 0;
  }
  return search(size-1,n);
}

int fold(int i1,int i2){
  if(i1==i2){
    printf("%d ",arr[i1]);
    return 0;}
  if(i2==i1+1){
    printf("%d ",arr[i1]+arr[i2]);
    return 0;}
  printf("%d ",arr[i1]+arr[i2]);
  fold(i1+1,i2-1);
  return 0;
}

  
  
