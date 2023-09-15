//tanishq sura
//23CS10071

#include<stdio.h>
#include<stdlib.h>

int main(){
  int arr[50];
  int x,i,j,k,n;
  printf("give size of array:");
  scanf("%d",&n);
  for(x=0;x<n;x++){
    arr[x]=rand()%41+10;
    printf("%d ",arr[x]);
  }
  printf("\n");
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      for(k=j+1;k<n;k++){
	if(arr[i]+arr[j]+arr[k]==60){
	  printf("the indices of nos adding to 60 are :%d,%d,%d",i,j,k);
	  printf("the nos are: %d,%d,%d\n",arr[i],arr[j],arr[k]);
	}
      }
    }
  }

  return 0;
}
