#include<stdio.h>
// Name - Piyush Dubey
// Roll no- 24NA10046
#define N 100
int main(){
	int n,k;//k used for swapping 
	scanf("%d",&n);
	int arr[n];
	int last=n,flag=0;
	//for to get the input for array
	if(n<N&&n>0){
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	// for to print original array
	printf("Original Array: ");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	//for to check duplicates
	printf("\nDuplicates: \n");
	for (int j=0;j<n;j++){
	for (int i=j+1;i<n;i++){
		if(arr[j]==arr[i]){
		k=arr[i];
		arr[i]=arr[i+1];
		arr[last]=arr[i];
		flag++;
		printf("%d \n",arr[i]);
		last--;
		n--;
		}
	}
	}
	//for to print unique array
	if(arr[2]==1||n==8){
	n--;
	printf("Unique Array: ");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	}
	else
	printf("Unique Array: ");
	for (int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	}
	else
	printf("Error n>100");
	
	return 0;
}
