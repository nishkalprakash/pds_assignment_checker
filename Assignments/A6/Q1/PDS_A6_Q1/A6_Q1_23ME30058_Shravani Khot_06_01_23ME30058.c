#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int size ;
int arr[100];


void fill(){
  
  printf("Enter size of array\n");
  scanf("%d",&size);
  if ((size>0)&&(size<101)){

    for (int i=0 ; i<size ; i++ ) {

      arr[i]=(rand()%900)+100 ;
      }
    for (int i=0 ; i<size ; i++ ){
      printf("arr[%d]=%d\n",i,arr[i]);
    }
    
  }
  else {
    printf("Enter size between 1-100\n");
  }
};
void exachange(){

  printf("Original array : \n");

  for (int i=0 ; i<size ; i++ ){
      printf("arr[%d]=%d\n",i,arr[i]);
    }

  printf("Array after exchange func : \n");

  for (int i= size/2 ; i<size ; i++){
    printf("arr[%d]=%d\n",i,arr[i]);
    }
  for (int i= 0 ; i<size/2 ; i++){
     printf("arr[%d]=%d\n",i,arr[i]);
  }
  
};
void rotate_right(){
   printf("Original array : \n");

  for (int i=0 ; i<size ; i++ ){
      printf("arr[%d]=%d\n",i,arr[i]);
    }

  printf("Array after rotate right func : \n");
  printf("arr[%d]=%d\n",0,arr[size-1]);
  for (int i=1 ; i<size ; i++ ){
    printf("arr[%d]=%d\n",i,arr[i-1]);
    
  }
  
};
void rotate_left(){
   printf("Original array : \n");

  for (int i=0 ; i<size ; i++ ){
      printf("arr[%d]=%d\n",i,arr[i]);
    }

  printf("Array after rotate left func : \n");
  
  for (int i=0 ; i<size-1 ; i++ ){
    printf("arr[%d]=%d\n",i,arr[i+1]);
    }
  printf("arr[%d]=%d\n",size-1,arr[0]);
};

void segregate(){
  printf("Original array : \n");

  for (int i=0 ; i<size ; i++ ){
      printf("arr[%d]=%d\n",i,arr[i]);
    }

  printf("Array after segregate func : \n");
  
    for (int i=0 ; i<size ; i++ ){
      if (arr[i]%2==0){
	printf("arr[%d]=%d\n",i,arr[i]);}
  }
       for (int i=0 ; i<size ; i++ ){
	 if (arr[i]%2==1){
	   printf("arr[%d]=%d\n",i,arr[i]);}
    }
    

};
void search(){
  int a;
   printf("Original array : \n");

  for (int i=0 ; i<size ; i++ ){
      printf("arr[%d]=%d\n",i,arr[i]);
    }

  printf("Enter an integer \n");
  scanf("%d",&a);
  for (int i=0 ; i<size ; i++ ){
    if (arr[i]==a) {printf("Array index is %d \n",i);
      }
    else {printf("Not found \n");
    }
  }

 
  
};
void fold(){
  int k[100];

   printf("Original array : \n");

  for (int i=0 ; i<size ; i++ ){
      printf("arr[%d]=%d\n",i,arr[i]);
    }

  printf("Array after fold func : \n");

  for (int i=0 ; i<size ; i++ ){
    k[i]=arr[i]+arr[size-1-i];
  }

  for (int i=0 ; i<(size/2+1) ; i++ ){
    printf("k[%d]=%d \n" , i, k[i]);
  }
  if (size%2==1){printf("k[%d]=%d \n",(size/2) + 1 ,arr[(size/2)+1]);}
  else {printf("\n");}
  
};
void analyze(){};

int main(){
   int p;

   while (1) {
   
  printf("1-fill \n 2-exchange \n 3-rotate right \n 4-rotate left \n 5-segregate \n 6-search \n 7-fold \n 8-analyse \n Enter your menu choice \n");
  
  scanf("%d",&p);
  
  switch (p) {
  case 1 : fill();
    break ;
  case 2 : exachange();
    break;
  case 3 : rotate_right();
    break;
  case 4 : rotate_left();
    break;
  case 5 : segregate();
    break;
  case 6 : search();
    break;
  case 7 : fold();
    break;
  case 8 : analyze();
    break;
  default : printf("Enter menu value between 1-8 \n");
    break;
  }

     }

  return 0;

 

}
