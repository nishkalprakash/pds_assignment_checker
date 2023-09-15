//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int arr[50],n,x,flag=0;
  printf("Enter the numbers to be generated: \n");
  scanf("%d",&n);
  srand(time(NULL));

  for(int i=0;i<n;i++){
    x=rand()%41 +10;
    arr[i]=x;
  }
  printf("\n\nThe Array Contents:\n\n");
  for(int i=0;i<n;i++){
    printf("Number: %d   Index: %d\n",arr[i],i);
  }
  printf("\n\nThe triplets adding upto 60:\n\n");
  for(int i=0;i<n;i++){
    for(int j=i+1;(j<n && j!=i) ;j++){
      for(int k=j+1;(k<n && k!=i && k!=j) ;k++){
	if(arr[i]+arr[j]+arr[k]==60){
	  printf("Number 1: %d   Index : %d\nNumber 2: %d   Index : %d\nNumber 3: %d   Index : %d\n",arr[i],i,arr[j],j,arr[k],k);
	  printf("   ..............\n");
	  flag=1;
	}
      }
    }
  }
  if(flag==0)printf("No triplets found!!!\n");
  
  return 0;
}
