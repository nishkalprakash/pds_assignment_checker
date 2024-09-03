#include<stdio.h>
// Name - Piyush Dubey
// Roll no- 24NA10046
# define N 100
int main(){
	int n,j=0,k;
	scanf("%d",&n);
	int arr[n];
	if(n>0&&n<=N){ //if condition to get right values of n
	// for to get the array value 
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]); 
	}
	printf("Original Array: ");
	// for to print the original array
	for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	// for to swap the negative values to initial places and to give the initial places positive values if any to the initial negative place
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			k=arr[j];
			arr[j]=arr[i];
			arr[i]=k;
			j++;
		}
	//for to print Reaaranged array	
	}
	printf("\nRearranged Array: ");
	for(int i=0;i<n;i++){
	printf("%d ",arr[i]);
	}
	}
	else 
	printf("Error n> 100");
	
	
	
	
	
	return 0;
}
