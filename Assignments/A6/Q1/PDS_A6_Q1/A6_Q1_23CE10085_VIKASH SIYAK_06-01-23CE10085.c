//Roll no-23CE10085
//Name-Vikash siyak

#include<stdio.h>
#include<stdlib.h>
int arr[100],a,i,arr6[100];

int main(){
  printf("Enter the size of array");
  scanf("%d",&a);
  if(a<=100 && a>=1){
    for(int i=0;i<100;i++){
      arr[i] = rand()%100+900;
    }
    for(int i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d",&arr[i]);
    }
  }
  else {fill();}
}
int Exchange(){
  for(int i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d",&arr[i]);
  }
  if(a & 2 ==0){
    for(int i=0;i<(a/2);i++){
      int b;
      b=arr[i];
      arr[i] =arr[(a+1)/2+i];
      arr[(a+1)/2+i]=b;
    }
int Rotate_right(){
  for(int i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d",&arr[i]);
  }
  int arr6[100];
  for(int i=0;i<=a;i++){
    arr[i-1]=arr6[i];
  }
  arr[a] = arr6[0];
   for(int i=0;i<100;i++){
      printf("array is..\n");
      printf("%d\n",arr[i]);
   }
}

      
int Rotate_left(){
  for(i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d\n",&arr[i]);
  }
  int arr6[100];
  for(i=0;i<=a;i++){
    arr6[i]=arr[i-1];
  }
  arr6[0] = arr[a];
   for(i=0;i<100;i++){
      printf("array is..\n");
      printf("%d\n",arr[i]);
   }
   for(i=0;i<100;i++){
     arr[i]=arr6[i];
   }
}
 int search(){
    for(i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d\n",&arr[i]);
  }
 }
  int segregte(){
    for(i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d\n",&arr[i]);
  }
 }
   int fold(){
    for(i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d\n",&arr[i]);
  }
 }
    int analyze(){
    for(i=0;i<100;i++){
      printf("array is..\n");
      scanf("%d\n",&arr[i]);
  }
 }
   
 
  int main(){
    int d;
    printf("choices:1fill\n.2Exchange\n.3Rotate_right\n.4Rotate_left\n.5Segregate\n.6search\n.7fold\n.8analyze\n");
    scanf("%d",&d);

    if(d>0 && d<=9){
      switch(d){
    part1:  fill();
    break;
    part2:  Exchange();
    break;
    part3:  Rotate_right();
    break;
    part4:  Rotate_left();
    break;
    part5:  Segregate();
    break;
    part6:  search();
    break;
    part7:  fold();
    break;
    part8:  analyze();
    break;
      }
    }
    
  }
    
  
    
    
  
  
  
