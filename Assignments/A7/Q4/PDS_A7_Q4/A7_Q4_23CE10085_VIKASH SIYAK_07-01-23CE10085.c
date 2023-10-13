#include<stdio.h>
#include<stdlib.h>
int i=0,j=0,k=0;
int arr[50];
int m;

int main(){
  printf("enter the random number");
  scanf("%d",&m);
  for(i=0;i<m;i++){
    arr[i] = rand()%41+10;
  }
  if(i>50){
    printf("limit crossed");
  }
  for(i=0;i<m;i++){
    printf("arr[%d]=%d",i,arr[i]);
  }
  for(i=0;i<m-2;i++){
    for(j=i+1;j<m-1;j++){
      for(k=i+2;k<m;k++){
	if(arr[i]+arr[j]+arr[k]==60){
	  printf("arr[%d]+arr[%d]+arr[%d]=60",i,j,k);
	}
      }
    }
  }
}
    
      
  

    
    

  
  
  
