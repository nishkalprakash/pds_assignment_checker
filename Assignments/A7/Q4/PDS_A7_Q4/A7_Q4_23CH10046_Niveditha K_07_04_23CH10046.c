#include <stdio.h>
#include <stdlib.h>

int main(){

  int arr[50];
  int n;
  printf("Enter the number of numbers to be generated: ");
  scanf("%d",&n);
  for(int i=0; i<n; i++){
    arr[i] = rand()%41 + 10;
    printf("%d\t",arr[i]);
  }
  printf("\n\n");
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      for(int k=j+1; k<n; k++){
	if(arr[i]+arr[j]+arr[k] == 60){
	  printf("Triplet: ");
	  printf("%d - a[%d]\t",arr[i],i);
	  printf("%d - a[%d]\t",arr[j],j);
	  printf("%d - a[%d]\n",arr[k],k);
	}
      }
    }
  }

  return 0;
}
