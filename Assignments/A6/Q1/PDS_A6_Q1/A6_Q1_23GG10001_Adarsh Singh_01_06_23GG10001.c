#include <stdio.h>
#include <stdlib.h>
int arr[100],size;
void fill(void){
  int i;
  printf("Enter the size of the array:\n");
  scanf("%d",&size);
  while(size<1||size>100){
    printf("Enter the value of size in the range of 1 to 100:");
    scanf("%d",&size);
  }
  if((size>=1)||(size<=100)){
    for(i=0;i<size;i++){
      arr[i]=(rand()%(999-100+1)+100);
    }  
  }
  printf("The values stored in the array are:\n");
  for(i=0;i<size;i++){
    printf("%d,",arr[i]);
  }
}

void exchange(void){
  int temp,i;
  printf("\nThe orignal array is:\n");
  for(i=0;i<size;i++){
    printf("%d,",arr[i]);
  }
  for(i=0;i<size/2;i++){
    temp=arr[i];
    arr[i]=arr[size-1-i];
    arr[size-1-i]=temp;
  }
}

void rotate_right(void){
  int temp,i;
  printf("\nThe orignal array is:\n");
  for(i=0;i<size;i++){
    printf("%d,",arr[i]);
  }
  temp=a[size-1];
  for(i=size-1;i>0;i--){
    a[i]=a[i-1];
    if(i==0){
      a[i]=temp;
    }
  }
}

void rotate_left(void){
  int temp,i;
  printf("\nThe orignal array is:\n");
  for(i=0;i<size;i++){
    printf("%d,",arr[i]);
  }
  temp=a[0];
  for(i=0;i<size-1;i++){
    a[i]=a[i+1];
    if(i==(size-1)){
      a[i]=temp;
    }
  }
}

void segregate(void){
  int temp,i,j;
  printf("\nThe orignal array is:\n");
  for(i=0;i<size;i++){
    printf("%d,",arr[i]);
  }
  
}  

void search(void){
  int temp,i,j;
  printf("\nThe orignal array is:\n");
  for(i=0;i<size;i++){
    printf("%d,",arr[i]);
  }
  printf("Enter the integer value to be searched:\n");
  scanf("%d",&j);
  for(i=0;i<size;i++){
    if(arr[i]==j){
      printf("The value is found at index: %d",i); 
    }
    else{
      printf("Not found");
    }  
  }
}

void fold(void){
  int temp,i,k,j[size];
  if((size%2)!=0){
    k=(size/2)+1;
  }
  else{
    k=size/2;
  }
  for(i=0;i<size;i++){
    if((size%2)!=0){
      if(i=((size/2)+1)){
	j[i]=(arr[i]+arr[size-1-i])/2;
      }
      j[i]=arr[i]+arr[size-1-i];
    }
    j[i]=arr[i]+arr[size-1-i];
  }
  for(i=0;i<k;i++){
    arr[i]=j[i];
  }  
}

void analyze(void){
  int pos,isize,i,count=0;
  printf("\nThe orignal array is:\n");
  for(i=0;i<size;i++){
    printf("%d,",arr[i]);
  }
  for(pos=0;pos<size;pos++){
    if(arr[pos+1]>arr[pos]){
      count++;
    }
    
  }  
}
int main(){
  int i;
  printf("Menu choices:\n");
  printf("1---Fill\n");
  printf("2---Exchange\n");
  printf("3---Rotate right\n");
  printf("4---Rotate left\n");
  printf("5---Segregate\n");
  printf("6---Search\n");
  printf("7---Fold\n");
  printf("8---Analyze\n");
  printf("0,9 or any higher number---Exit\n\n");
  printf("Please enter your choice of operation:\n");
  scanf("%d",&i);
  Fill();
  do{
    if(i==1){
      Fill();
    }
    else if(i==2){
      Exchange();
    }
    else if(i==3){
      rotate_right();
    }
    else if(i==4){
      rotate_left();
    }
    else if(i==5){
      Segregate();
    }
    else if(i==6){
      search();
    }
    else if(i==7){
      fold();
    }
    else if(i==8){
      analyze();
    }
    else{
      exit;
    }  
  }(while 1)
  return 0;
}
