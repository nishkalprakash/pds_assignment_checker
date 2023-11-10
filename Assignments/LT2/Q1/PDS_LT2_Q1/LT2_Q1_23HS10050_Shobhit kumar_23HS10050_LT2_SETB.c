//Name-Shobhit kumar
//Roll no-23HS10050
//SetB

#include<stdio.h>
#include<stdlib.h>


int arr[50];
void maxMin(){
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]");
  int max=20;
  int min=100;
  for(int i=0;i<50;i++){
    if(arr[i]>max){
      max=arr[i];
    }
  }
 for(int i=0;i<50;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  printf("Maximum number in array is: %d\n",max);
  printf("Minimum number in array is: %d\n",min);
}

void duplicate(){
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");
  int temp[50];
  printf("The duplicate numbers in array are: ");
  for(int i=0;i<50;i++){
    for(int j=i+1;j<50;j++){
      if(arr[i]==arr[j]);
      temp[i]=arr[i];
      
    }
  }
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",temp[i]);
  }
  printf("]\n");
}

void highestFreq(){
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");

  int x=1;
  int freq=1;
 
  for(int i=0;i<50;i++){
    for(int j=i+1;j<50;j++){
      if(arr[i]==arr[j]);
      x++;      
    }
    if(x>freq){
      freq=x;
    }
  }
  printf("Highest Freq is:%d",freq);
}

void largestIncreasing(){
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");
  int temp;
  for(int i=0;i<50;i++){
    for(int j=i+1;j<50;j++){
      if(arr[i]>= arr[j]){
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
      }
    }
  }
  printf("increasing sequence\n");
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");
}

void largestDecreasing(){
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");
  int temp;
  for(int i=0;i<50;i++){
    for(int j=i+1;j<50;j++){
      if(arr[i]<= arr[j]){
	temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
      }
    }
  }
  printf("decreasing sequence\n");
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");
}

void removeDuplicate(){
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");
  int temp[50];
  for(int i=0;i<50;i++){
    for(int j=i+1;j<50;j++){
      if(arr[i]==arr[j]);
      temp[i]=arr[i];
    }
  }
  printf("The numbers after removing duplicate entries\n");
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",temp[i]);
  }
  printf("]\n");
}
      
  

int main(){
  for(int i=0; i<50; i++){
    arr[i]=rand()%81+20;
  }
  printf("[");
  for(int i=0;i<50;i++){
    printf("%d,",arr[i]);
  }
  printf("]\n");
  int n;
  printf("1:maxMin\n");
  printf("2:duplicate\n");
  printf("3:highestFreq\n");
  printf("4:largestIncreasing\n");
  printf("5:largestDecreasing\n");
  printf("6:removeDuplicate\n");
  printf("Enter 0 for exit\n");
  printf("Enter the choice\n");
  scanf("%d",&n);
  

  for(int i=0;i<100;i++){
    if(n==1){
      maxMin();
    }
    if(n==2){
      duplicate();
    }
    if(n==3){
      highestFreq();
    }
    if(n==4){
      largestIncreasing();
    }
    if(n==5){
      largestDecreasing();
    }
    if(n==6){
      removeDuplicate();
    }
    else(n==0);
      break;
    
  }
  return 0;
}

  
  
  
  
  
    
  
  
  
  
  
