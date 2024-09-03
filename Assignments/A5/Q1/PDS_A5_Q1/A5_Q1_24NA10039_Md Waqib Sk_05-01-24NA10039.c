//rearranging array
//creator:md waqib sk
//roll:24NA10039
#define N 100 
#include<stdio.h>
int main(){
int n;
printf("Enter size of array : \n");
scanf("%d",&n);
if(n>N){
printf("Error: n>100 \n");
}
else{


int arr[n];
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
		printf("original array:");
		
	for(int i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}
	printf("\n");

int l=0;
	for(int i=0;i<n;i++){ //itrates through the array....  
	if(arr[i]<0){           //if the element is negative it swaps with arr[l] and l gets incremented
	int temp=arr[l];
	arr[l]=arr[i];
	arr[i]=temp;
	l++;
	
	}
	}
	printf("rearranged array:");
	
	for(int i=0;i<n;i++){
	printf(" %d ",arr[i]);
	}
}



}

