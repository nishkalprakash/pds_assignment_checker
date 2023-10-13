#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[50];
  int i;
  int n;
  
  printf("enter number of numbers to be generated: ");
  scanf("%d",&n);
  if(n>0 && n<51)
  {
    for(i=0;i<n;i++)
    {
      arr[i]=rand()%41+10;
    }
    for(i=0;i<n;i++){
      printf("%d ",arr[i]);
    }
    for(i=0;i<n-1;i++){
      for(int j=i+1;j<n-1;j++){
	for(int k=j+1;k<n-1;k++){
	  printf("arr[%d]=%d,arr[%d]=%d,arr[%d]=%d",i,arr[i],j,arr[j],k,arr[k]);
	}
      }
    }
    
    
   
      
  }
  return 0;
 
 
}
  
