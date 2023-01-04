/*SOUVIK SARKAR
ROLL NO> 22ME10083
LAbn NO> 7*/

// Programe to print the array in correct manner with i/p no.
#include<stdio.h>
//Creating the function to get the correct order of the array
void bubbleSort(int arr[], int size)
{
	int temp;
	for ( int i= 0; i < size-1 ;i++)
	{ 
		for ( int j = 0; j < size-1-i; j++)
		{	
			if ( arr[j] > arr[j+1] ) 
			{ 	temp = arr[ j +1] ;
				arr[j +1] = arr[j] ;
				arr[j] = temp ;
			}
		}
	}
}
void main(){
	//Varriabes initialization
	int n,i,j;
	int a[n+1];
	// Taking inputs
	printf("Enter the total no. of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nEnter the elements;(in sorted manner): ");
		scanf("%d",&a[i]);
	}	
	//i/p array print
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	// Taking a new no.
	printf("\n enter a new no.:");
	scanf("%d",&a[n]);
	//logic
	bubbleSort(a,n+1);
	//Result
	for(j=0;j<n+1;j++)
	{
		printf("%d ",a[j]);
	}

}