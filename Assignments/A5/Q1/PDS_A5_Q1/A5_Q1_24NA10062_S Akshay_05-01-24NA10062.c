#include <stdio.h>
#define N 100

void main(){
	int arr[N];
	int n;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	if(n>N){
		printf("Error: n > 100\n");
		return;
	}else if(n<1){
		printf("Error: n <= 0\n");
		return;
	}
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	printf("Original Array: ");
	for(int i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\n");
	
	int j=0,tmp;//j->position of rightmost continuous -ve number
	for(int i=0;i<n;i++){
		if(arr[i]<0){
		//when -ve number is found move the +ve elements to the right from j to i and 
		//set arr[j] as the -ve number and increase j 
			tmp = arr[i];
			for(int k=i;k>j;k--){
				arr[k]=arr[k-1];
			}
			arr[j]=tmp;
			j++;
		}
	}
	printf("Rearranged Array: ");
	for(int i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\n");
}
