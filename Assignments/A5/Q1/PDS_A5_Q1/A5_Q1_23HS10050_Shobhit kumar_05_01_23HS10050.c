//Name: Shobhit kumar
//Roll no: 23HS10050

#include<stdlib.h>
#include<stdio.h>

int main(){
  int arr[50],n;
  printf("Enter the numbers of random(<50):\n");
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    arr[i]=rand()%10+100;
    printf("%d",arr[i]);
  }
  for (int i=0;i<n;i=i+2){
    if(arr[i]>arr[i+2]){
      int temp=arr[i];
      arr[i]=arr[i+1];
      arr[i+1]=temp;
      printf("After the interchange array values\n");
      printf("%d",arr[i]);
    }
  }
  
      
  return 0;
}

  
