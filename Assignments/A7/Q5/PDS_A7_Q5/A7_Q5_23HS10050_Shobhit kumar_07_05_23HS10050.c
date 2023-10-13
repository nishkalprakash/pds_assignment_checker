//Roll no- 23HS10050
//Name- Shobhit kumar

#include <stdio.h>
#include <stdlib.h>

int main(){
  int arr[20][3],n;

  for(int i=0;i<20;i++){
    arr[i][0]=rand()%999 + 1000;
  }

  for(int i=0;i<20;i++){
    arr[i][1]=rand()%9 + 15;
  }

  for(int i=0;i<20;i++){
    arr[i][2]=rand()%100;
  }

  printf("display the data of having same age\n");

  for(int i=0;i<20;i++){
     for(int j=i+1;i<20;j++){
       if(arr[i][1]==arr[j][1]){
	 printf("roll:%d  age:%d  mark:%d\n",arr[i][0],arr[i][1],arr[i][2]);
	 printf("roll:%d  age:%d  mark:%d\n",arr[j][0],arr[j][1],arr[j][2]);
       }
     }
  }



  printf("display the data of having identical marks\n");
  for(int i=0;i<20;i++){
     for(int j=i+1;i<20;j++){
       if(arr[i][2]==arr[j][2]){
	 printf("roll:%d  age:%d  mark:%d\n",arr[i][0],arr[i][1],arr[i][2]);
	 printf("roll:%d  age:%d  mark:%d\n",arr[j][0],arr[j][1],arr[j][2]);
       }
     }
  }

  
  
  for(int i=0;i<20;i++){
    for(int j=i+1;j<20;j++){
      if(arr[i][0]>arr[j][0]){
	int temp;
	temp=arr[i][0];
	arr[i][0]=arr[j][0];
	arr[j][0]=temp;
      }
    }
  }
      
	  
  for(int i=0;i<20;i++){
    printf("roll:%d  age:%d  mark:%d\n",arr[i][0],arr[i][1],arr[i][2]);
  }
  
  return 0;  
}
      
      

    

  


 
