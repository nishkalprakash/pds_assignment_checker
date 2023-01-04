/*SOUVIK SARKAR
ROLL NO> 22ME10083
LAbn NO> 7*/
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
	int n,l,k;
	int a[n];
	printf("Enter the total no. of elements:\n");
	scanf("%d",&n);
	for(l=0;l<n;l++)
	{
		printf("emter the numbers :");
		scanf("%d",&a[l]);
	}
	bubbleSort(a,n);
	for(k=0;k<n;k++)
		printf("%d",a[k]);
}	