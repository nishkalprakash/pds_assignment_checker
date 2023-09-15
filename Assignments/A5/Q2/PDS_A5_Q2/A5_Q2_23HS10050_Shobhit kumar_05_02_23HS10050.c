//Name: Shobhit kumar
//Roll no: 23HS10050

#include<stdlib.h>
#include<stdio.h>

int main(){
  int arr[50],n;
  printf("Enter the no of random value:");
  scanf("%d",&n);
  printf("the %d random no:\n",n);
  
  for(int i=0;i<n;i++){
    arr[i]=rand()%50+10;
    printf("%d\n",arr[i]);
  }
  
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
	if((arr[i]+arr[j]+arr[k])==60){
	  printf("The triplet add up to 60: ");
	  printf("%d:%d,%d:%d,%d:%d\n",i,arr[i],j,arr[j],k,arr[k]);
	}
      }
    }
  }
  return 0;
}

  
