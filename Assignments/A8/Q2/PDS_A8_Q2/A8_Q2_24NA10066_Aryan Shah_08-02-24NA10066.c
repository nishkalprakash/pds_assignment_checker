#include<stdio.h>
#define N 101

//Read the size of arrat arr[]
//Read thse array arr[]
//Sort the array in increasing order
//Take a number m and insert it into the array at its right position

int main(){
	int n,i ,j ;
	printf("Enter length of array : ");
	scanf("%d",&n);		//User input of array length
	
	int arr[N];		//Declaration of array
	
	//User input of array elements
	printf("Array : ");
	for(i = 0; i<n; i++) scanf("%d", &arr[i]);
	
	//Sorting the array --> Compares two consecutive elements and swaps them if the number at smaller index is greater 
	for(i= 0 ; i<n-1 ; i++){
		if(arr[i]>arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp ;
		}
	}
	//User input of m
	int m ;
	printf("Enter number m to be inserted : ");
	scanf("%d", &m);
	n++ ;		//Incrementing the size of array
	
	
	//Appending m into the array
	if(m > arr[n-2]) arr[n-1] = m ;
	
	//Traverses the array to find number greater than m and then shifts the later elements
	else{
		for(i=0 ; i<n ; i++){
			if(arr[i]>m){
				int temp = arr[i];
				arr[i] = m ;
				for(int j = i+1; j<n ; j++){
					int temp2 = arr[j];
					arr[j] = temp ;
					temp = temp2 ;
				}
				break;
			}
		}
	}
	
	//Printing the final array
	printf("Output array : [");
	for(i=0 ; i<n ; i++) printf("%d, ", arr[i]);
	printf("]");
}
