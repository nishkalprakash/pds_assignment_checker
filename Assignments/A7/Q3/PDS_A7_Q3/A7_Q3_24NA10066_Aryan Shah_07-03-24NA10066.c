#include<stdio.h>


//Function to find minimum of the array
int min(int arr[], int n){
	int min_ = arr[0] ;
	for (int i = 1 ; i<n ; i++){
		if(arr[i]< min_) min_ = arr[i] ;
	}
	return min_ ;
}

//Function to find maximum of the array
int max(int arr[], int n){
	int max_ = arr[0] ;
	for (int i = 1 ; i<n ; i++){
		if(arr[i] >  max_) max_ = arr[i] ;
	}
	return max_ ;
}


//Find interval for bins
int interval(int mx,int mn ,int bins){
	int itv  = (mx+mn)/bins + 1;
	return itv ;
}


//Function to print the elements according to sequence
void elements(int arr[],int n, int mn, int mx){
	int count  = 0 ;
	for(int i = 0 ; i<n ; i++){
		if(arr[i] <= mx && arr[i] >= mn){
			printf("%d ",arr[i]);
			count++ ; 
		}
	}
	printf("\t Elements = %d \n", count);
}

int main(){

//Scanning values for different variables
	int n, bins ; 
	printf("Enter n : ");
	scanf("%d", &n);
	
	int arr[n] ;
	printf("arr[n] = ");
	for (int i = 0; i < n ; i++) scanf("%d", &arr[i]);
	
	printf("Bins : ");
	scanf("%d", &bins);
	
	
	//Defining min , max and interval
	int mx = max(arr,n) ;
	int mn = min(arr, n), itv = interval(mx,mn , bins);
	
	
	//Printing the final sequence
	int i = 0 ;
	while (i < bins){
		elements(arr, n , mn, itv) ;
		mn = ++itv ;
		itv += itv ;
		
		i++ ;
	}
}
