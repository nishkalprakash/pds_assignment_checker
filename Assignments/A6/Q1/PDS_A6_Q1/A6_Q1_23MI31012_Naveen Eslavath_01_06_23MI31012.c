//ESLAVATH NAVEEN
//23MI31012
#include <stdio.h>
#include <stdlib.h>
void fill(arr[size]);
void exchange(int size);
void rotate_right(int size);
void rotate_left(int size);
int arr[100];
int size;


int main(){
  int x;
  printf("1-fill,2-exchange,3-rotate right,4-rotate left");
    scanf("%d\n",&x);
  printf("Enter the size \n");
  scanf("%d\n",&size);
  if(x==1){
    fill(arr[size]);
  }
  else if(x==2){
    exchange(int size);
  }
  else if(x==3){
    rotate_right(int size);
  }
  else if(x==4){
    rotate_left(int size);
  }
  else {
    printf("enter a correct value");
  }
    
  return 0;
}

void fill(arr[size]){
  int y;
  y=(rand()%(999-100)+100)+1;
  printf("Enter size\n");
  scanf("%d\n",&size);
  if(size>1 && size<100){
    for(int i=0;i<size;i++){
      arr[i]=y;
    }
    printf("the array is %d\n",arr[i]);
    }
    else
      return;
}

void exchange(int size){
  int i;
  for( i=0;i<size;i++){
    printf("%d",arr[i]);
  }
  for(i=0;i<size;i++){
    arr[i]=arr[size-1];
  }
  printf("\n%d",arr[i]);
}

void rotate_right(int size){
  int i;
   for(i=0;i<size;i++){
    printf("%d",arr[i]);
  }
   for(i=0;i<size;i++){
     arr[0]=arr[size-1];
     arr[i]=arr[i+1];
     printf("%d",arr[i]);
   }
}

void rotate_left(int size){
  int i;
   for(i=0;i<size;i++){
    printf("%d",arr[i]);
  }
   for(i=0;i<size;i++){
     arr[size-1]=arr[0];
     arr[i]=arr[i+1];
     printf("%d",arr[i]);
   }
}
  


    
  
  
