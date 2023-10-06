#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int sum(int arr[],int size){
  if (size<=0){
    return 0;
  }
  else{
    sum=arr[size]+sum(arr[size-1]);
    return sum;
  }
  printf("%d",sum);
}


int max(int arr[],int size){
  int max=1;
  if(size<=0){
    return 0;
  }
  else(arr[size-1]>max){
    max=arr[size-1];
  }
  size--;
  return max;
  printf("%d",max);
}
  
void reverse(int arr[],int size){
  int start=0;
  int end=size-1;
    while(start<end){
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
    }
    start++;
    end--;
    for(int i=0;i<size;++i){
      printf("%d,", arr[i]);
    }
  }
  return reverse;
}

int main(){
  srand(time(NULL));
  int arr[30];
  arr[i]=rand()%11+20;
  printf("Original array :");
  for(int i=0;i<=29;i++){
    arr[i]=rand()%11+20;
    printf("%d,",arr[i]);
  }
  printf("sum of arrays :");
  int sum(arr,30);
  printf("maximum array is :");
  int max(arr,30);
  printf("reversed array :");
  void reverse(arr,30);
  return 0;
}
  
