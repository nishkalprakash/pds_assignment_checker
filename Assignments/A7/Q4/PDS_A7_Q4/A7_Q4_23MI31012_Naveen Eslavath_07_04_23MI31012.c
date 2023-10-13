//ESLAVATH NAVEEN
//ROLL NO.:23MI31012

#include <stdio.h>
#include <stdlib.h>
int main(){
  int arr[50],x,n,i,j,k,l,sum=0;
  printf("Enter the number of numbers to be generated: ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    x=(rand()%(50-10)+10)+1;
    arr[i]=x;
    printf("%d ",arr[i]);
  }
  printf("\n");
    
  for(j=0;j<n;j++){
    for(k=j+1;k<n;k++){
      for(l=j+2;l<n;l++){
	sum=arr[j]+arr[k]+arr[l];
	if(sum==60){
    printf("arr[%d]=%d, arr[%d]=%d; arr[%d]=%d\n",j,arr[j],k,arr[k],l,arr[l]);
      }
      }
    }
  }
  return 0;
}
  
  
