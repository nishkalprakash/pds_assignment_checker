#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int a[50],n;
  srand(time(NULL));
  printf("Enter the number of times u want to generate random numbers :");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    a[i]=rand()%41+10;
  }
  printf("%d random numbers in range of [10,50]:\n",n);
  for(int i=0;i<n;i++){
    printf("%d\n",a[i]);
  }
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=i+2;k<n;k++){
	if(a[i]+a[j]+a[k]==60){
	  printf("%d %d %d triplets are present at indices %d %d %d \n",a[i],a[j],a[k],i,j,k);
	}
      }
    }
  }
  return 0;
}
	   
