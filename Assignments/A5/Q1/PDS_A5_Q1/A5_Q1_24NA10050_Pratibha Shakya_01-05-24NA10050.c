//Program to rearrange arrays
//Program Creator: Pratibha Shakya
//Roll no.:24NA10050

#include<stdio.h>
#define N 100
int main()
{
	
	int arr[N], n, i, temp;
	scanf("%d", &n);
	if(n>100)
		printf("Error: n>100");		//maximum elements can be 100
		
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);		//scaning input from  the user
	 
	printf("Original Array: ");		//printing the array
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
			
	for(i=0; i<n; i++){			//rearranging negative numbers by swaping
		if(arr[i]<0){
			while(i>0){
				temp=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=temp;
				i--;
				if(arr[i-1]<0)
					break;
			}	
			
		}
	}
	printf("Rearranged Array: ");		//Printing rearranged array
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
	
		
	return 0;
	
}
		
		
