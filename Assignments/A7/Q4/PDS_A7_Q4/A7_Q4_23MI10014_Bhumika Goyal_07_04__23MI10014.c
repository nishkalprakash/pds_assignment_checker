//Bhumika Goyal
//23MI10014

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
  int arr[50];
  
  for(int i=0;i<50;i++){
    arr[i]=rand()%(41)+10;
  }

  for (int i=0; i<50;i++){
    printf("arr[%d]=%d",i,arr[i]);
  }
  for (int i=0;i<50;i++){
    for(int j=i+1; j<50;j++){
      for (int k=i+2;k<50;k++){
	if(arr[i]+arr[j]+arr[k]==60){
	 
	  printf("indices :%d ,%d,%d\n ", i,j,k);
	  printf("arr[%d]=%d  arr[%d]=%d arr[%d]=%d\n ",i,arr[i],j,arr[j],k,arr[k]);
	  
	}
      }
    }
  }
  return 0;
}
	  
      
    
  
  
