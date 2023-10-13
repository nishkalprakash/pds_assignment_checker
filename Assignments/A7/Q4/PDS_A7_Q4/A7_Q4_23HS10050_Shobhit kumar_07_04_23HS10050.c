
//Roll no- 23HS10050
//Name- Shobhit kumar

#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[50],s;
  printf("enter the number of such numbers to be generated(max 50):");
  scanf("%d",&s);

  for(int i=0;i<s;i++){
    arr[i]=rand()%39 + 10;
  }
  printf("%d",s);
  
  printf("{");
  for(int i=0;i<s;i++){
    printf("%d,",arr[i]);
  }
  printf("\n");
  printf("}");
  

  printf("the triplet that sum=60");

  for(int i=0;i<(s-2);i++){
    
    for(int j=i+1;j<(s-1);j++){
      
      for(int k=j+1;j<s;k++){
	
	if(arr[i] + arr[j] + arr[k]==60){
	  
	  printf("arr[%d]=%d,arr[%d]=%d,arr[%d]=%d\n",i,arr[i],j,arr[j],k,arr[k]);
	}
      }
    }
  }
  return 0;
}


  
    
  
  
