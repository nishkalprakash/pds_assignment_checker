//roll no-23EX10004
//NAME-ANSH KUMAR
#include<stdio.h>
#include<stdlib.h>
 int arr[100];
  int size;
void fill(int size){
  printf("enter the size\n");
  scanf("%d",&size);
  {
  if(size>100||size<1){
    printf("enter the valid value");
    
      }
  else{
      printf("the elements of array are :\n");
      for(int i=0;i<size;i++){
	printf(" %d\n",arr[i]=100+rand()%899);
	

      }
     
    }
  }
}
void exchange(int size){
  fill(size);
 
  if(size%2!=0){
    for(int i=0;i<(size/2);i++){
    arr[i]=arr[size/2+i+1];
    printf("%d",arr[i]);
  }
     printf("%d",arr[size/2]);
      for(int j=size/2+1;(j>size/2&&j<size);j++){
    arr[j]=arr[j-size/2-1];
    printf("%d",arr[j]);
      }
  }
  else{
    
  for(int i=0;i<size/2;i++){
    arr[i]=arr[size/2+i];
    printf("%d",arr[i]);
  }
  for(int j=size/2;(j<size);j++){
    arr[j]=arr[j-size/2];
    printf("%d",arr[j]);
  }
    }
}

  void rotateright(int size){
    fill(size);
    for(int i=1;i<size;i++){
      ( arr[i]=arr[i-1])&&(arr[0]=arr[size-1]);
      printf("%d",arr[i]);
    }
  }
void rotateleft(int size){
  fill(size);
    for(int i=0;i<size;i++){
      ( arr[i]=arr[i+1])&&(arr[size-1]=arr[0]);
      printf("%d",arr[i]);
    }
  }
void segregate(int size){
  fill(size);
  for(int i=0;i<size;i++){
    if(arr[i]%2==0){
      printf("%d",arr[i]);
    }
    else if(arr[i]%2!=0){
      printf("%d",arr[i]);
    }
  }
}
void search(int size){
  fill(size);
  int k;
  printf("enter the value to be searched\n");
  scanf("%d",&k);
  for(int i=0;i<size;i++){
    if(arr[i]%k==0){
      printf("%d\n",arr[i]);
    }
    else
      printf("not found\n");
    }
}
void fold(int size){
  fill(size);
  int arr1[100];
  if(size%2==0){
    for(int z=0;z<(size/2);z++){
      
      arr1[z]=arr[z]+arr[size-z-1];
      printf("%d",arr1[z]);
    }
  }
  else if(size%2!=0){
     for(int z=0;z<(size/2);z++){
       arr1[z]=arr[z]+arr[size-z-1];
       printf("%d",arr1[z]);
     }
  }
}
      
    
    

  
    








    
int main(){
  int n;
  
    printf(" The choices are:\n");
    printf("1-Fill\n");
    printf("2-exchange\n");
    printf("3-rotate right\n");
    printf("4-rotate left\n");
    printf("5-segregate\n");
    printf("6-search\n");
    printf("7-fold\n");
    printf("8-analyze\n");
    printf("0,9 or any higher number-exit\n");
  
    
    printf("select any choice\n");
    scanf("%d",&n);
    if(n>=1&&n<=9){
      if(n==1){
	fill(size);
      }
       if(n==2){
	exchange(size);
	  }
       if(n==3){
	rotateright(size);
      }
       if(n==4){
	rotateleft(size);
      }
       if(n==5){
	segregate(size);
      }
       if(n==6){
	 search(size);
       }
       if(n==7){
	 fold(size);
       }
     
	
    }
      return 0;
    }
	
	
    
      
    
