//Name:Ranga Kiranmai
//Roll No:23EE30017
#include <stdio.h>
#include <stdlib.h>
int arr[100],size;
void fill() {
  int i;
  while(1){
  printf("Enter the size:");
  scanf("%d",&size);
  if(size>1 && size<100) break;
  else {printf("The size must be in between 1 to 100!!\n");
        continue;}
  }
  for(i=0;i<size;i++) {
    arr[i]=100+rand()%899;
  }
  for(i=0;i<size;i++) {
    printf("arr[%d]=%d\n",i,arr[i]);
  }
}
void exchange() {
  int i,temp;
  printf("The original array is:\n");
   for(i=0;i<size;i++) {
    printf("arr[%d]=%d\n",i,arr[i]);
  }
   printf("The exchanged array is:\n");
  if(size%2==0) {
    for(i=0;i<(size/2);i++) {
      temp=arr[i];
      arr[i]=arr[(size/2)+i];
      arr[(size/2)+i]=temp;
    }
    for(i=0;i<size;i++){
      printf("arr[%d]=%d\n",i,arr[i]);
    }
  }
  if(size%2!=0) {
    for(i=0;i<(size/2);i++) {
      if(i!=(size/2)) {
      temp=arr[i];
      arr[i]=arr[(size/2)+i+1];
      arr[(size/2)+i+1]=temp;
	}
   }
    for(i=0;i<size;i++){
      printf("arr[%d]=%d\n",i,arr[i]);
    }
  }
}
void rotate_right() {
  int i,temp;
  printf("The original array is:\n");
   for(i=0;i<size;i++) {
    printf("arr[%d]=%d\n",i,arr[i]);
  }
   printf("The rotated array:\n");
   for(i=(size-2);i>0;i--) {
     temp=arr[size-1];
     arr[i]=arr[i+1];
     arr[0]=temp;
   }
   for(i=0;i<size;i++) {
     printf("arr[%d]=%d\n",i,arr[i]);
   }
}
void rotate_left() {
  int i,temp;
  printf("The original array is:\n");
   for(i=0;i<size;i++) {
    printf("arr[%d]=%d\n",i,arr[i]);
  }
   printf("The rotated array:\n");
   for(i=1;i<size;i++) {
     temp=arr[0];
     arr[i]=arr[i-1];
     arr[size-1]=temp;
   }
   for(i=0;i<size;i++) {
     printf("arr[%d]=%d\n",i,arr[i]);
   }
}
void search() {
  int n,x,i;
       printf("The original array is:\n");
   for(i=0;i<size;i++) {
    printf("arr[%d]=%d\n",i,arr[i]);
  }
   printf("Enter a value to search:");
   scanf("%d",&n);
      for(i=0;i<size;i++) {
	if(arr[i]==n) x=i;
      }
      if(x>=0 && x<size)  printf("The element is located in the index %d\n",x);
	else printf("Not found!\n");
}
int main()
{
  int n;
  while(1) {
  printf("The following is the menu box,choose an option\n");
  printf("Please choose 1 to generate an array\n");
  printf("1->fill\n");
  printf("2->exchange\n");
  printf("3->rotate right\n");
  printf("4->rotate right\n");
  printf("5->segregate\n");
  printf("6->search\n");
  printf("7->fold\n");
  printf("8->analyse\n");
  printf("0,9 or any higher number->exit\n");
  printf("The choice:");
  scanf("%d",&n);
  if(n==0 || n>=9) break;
  if(n==1) {
    printf("\nYou selected to fill\n");
    printf("The array is:\n");
    fill();
  }
  if(n==2)  {
    printf("\nYou selected to exchange\n");
    exchange();
  }
   if(n==3)  {
    printf("\nYou selected to rotate right\n");
    rotate_right();
  }
    if(n==4)  {
    printf("\nYou selected to rotate left\n");
    rotate_left();
  }
     if(n==6)  {
    printf("\nYou selected to rotate left\n");
    search();
  }
  }

  return 0;
}
  
  
