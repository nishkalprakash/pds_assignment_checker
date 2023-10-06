// Roll no: 23HS10010
// Name: Anurag Pokhariyal
#include <stdio.h>
#include <stdlib.h>
int sum(int arr[30],int size){
  if (size==-1) return 0;
  else return arr[size] + sum(arr[30],size-1); 
}
int main(){
  int arr[30];
  for (int i=0;i<30;i++){
    arr[i]= rand()%11+20;
  }
  for (int i=0;i,30;i++){
    printf("Array[%d]:%d",i,arr[i]);
  }
  printf("The sum is %d",sum(arr[30],30));
  
}
