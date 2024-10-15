#include<stdio.h>
#include<math.h>
#define N 100

//making a selection sort function which sorts in descending order
void SelectionSort(int arr[],int n,int arr2[]){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
				//swap arr[i] and arr[j]
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				//simlary swap arr2[i] and arr2[j]
				int temp2 = arr2[i];
				arr2[i] = arr2[j];
				arr2[j] = temp2;
			}
		}
	}	
}


int main(){
	int n;
	scanf("%d",&n);
	int arr[N];
	//reading the values of the array
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	//making another array to store the no digits each integer of the arr have 
	int arr2[N]={0};
	for(int i=0;i<n;i++){
		int b = arr[i];
		while(b != 0){
			b /= 10;
			arr2[i]++;
		}
	}
	//making all the numbers to 9999..
	//Ex 8 to 8999999 
	//means making all the numbers to constant digit 7 by writing 9 in the back
	//we choose digits to be 7 because highest Ai can be pow(10,5)
	for(int i=0;i<n;i++){
		int c = 0;
		for(int j=0;j<7-arr2[i];j++){
			c = c*10+9;
		}
		arr[i] = arr[i]*pow(10,7-arr2[i]) + c;
	}
	//sorting the new array
	SelectionSort(arr,n,arr2);
	// making the values as the previous numbers now in the new given order of the array
	for(int i=0;i<n;i++){
		arr[i] /= pow(10,7-arr2[i]);
	}
	//printing the array
	printf("A[%d] = [",n);
	for(int i=0;i<n;i++){
		if(i==n-1){
			printf("%d",arr[i]);
		}
		else printf("%d, ",arr[i]);
		
	}
	printf("]\n");
	//printing the largest number
	printf("Largest = ");
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}
