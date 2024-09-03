//Program to remove duplicate entries from an array
//Program Creator: Pratibha Shakya
//Roll no. : 24NA10050

#include<stdio.h>
#define N 100

int main()
{
	int arr[N], i, n, k, dup;
	scanf("%d", &n);			//input the number of elements
	
	if(n>100)
		printf("Error: n>100");		//maximum elements can be 100
		
	for(i=0; i<n; i++)
		scanf("%d", &arr[i]);		//scaning input from  the user
	 
	printf("Original Array: ");		//printing the array
	for(i=0; i<n; i++)
		printf("%d ", arr[i]);
		
	for(i=0; i<n; i==){
		for(k=0; k<n-i; k++)
			if(arr[i]==arr[i+k])
				dup++;
				}
				
	return 0;
}
				
			
			
		
