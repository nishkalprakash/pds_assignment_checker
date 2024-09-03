#include<stdio.h>
#define N 100

//{5,96,33,55,55,33,33,5}

int main(){

	//Declaring variables and taking length of array
	int arr[N], n , i , j, count=1  ;
	printf("Enter number of elements : ");
	scanf("%d" , &n);
	
	if(N<n){
		printf("Error n > 100 \n");
	}
	else {
		//SCAN THE ELEMENTS OF ARRAY
		for(i=0; i<n ; i++){
		
			printf("Element %d -- ", i);
			scanf("%d",&arr[i]);
		}
		
		printf("Duplicates : \n") ;
		
		//TRAVERSING THROUGH ARRAY TO FIND DUPILCATES 
		for(i= 0 ; i<n ; i++){
			for(j=0 ; j<n ; j++){
				if(i!=j && arr[i]==arr[j]){
					count++ ;
				}
			}	
			if(count > 1) {
				arr[j] = arr[j+1];
				printf("%d (%d) \n", arr[i] ,count) ;
				n = n - count +1 ;
				count = 1 ;
				
			}
			
		}
		
		
		//Printing the final array with no duplicate entries
		for(i=0 ; i<n ; i++){
			printf("%d ",arr[i]);
		}
	}


}
